# 🎭 CPP Module 04 – Interfaces, Polimorfismo Avanzado y Rule of Three

> ✅ Objetivo: Dominar las **clases abstractas puras**, el **polimorfismo real**, la **gestión de recursos** y los **patrones de diseño** como **Factory Method**.
> ✅ Nivel: Avanzado
> ✅ Temas clave: clases abstractas, métodos puros, punteros polimórficos, herencia, gestión de memoria dinámica, Rule of Three

---

## 📚 Tabla de Contenidos

1. [Clases Abstractas y Métodos Puros](#-1-clases-abstractas-y-métodos-puros)
2. [Interfaces en C++](#-2-interfaces-en-c)
3. [Polimorfismo Real: Acceso Dinámico por Punteros](#-3-polimorfismo-real-acceso-dinámico-por-punteros)
4. [Factory Pattern](#-4-factory-pattern)
5. [Regla de tres en Jerarquías](#-5-regla-de-tres-en-jerarquías)
6. [Ejemplo Completo: Materia RPG](#-6-ejemplo-completo-materia-rpg)
7. [Errores Comunes](#-7-errores-comunes)
8. [Buenas Prácticas](#-8-buenas-prácticas)

---

## 🔹 1. Clases Abstractas y Métodos Puros

📘 **¿Qué es?**
Una **clase abstracta** tiene al menos un **método virtual puro**:

```cpp
virtual void metodo() const = 0;
```

🎯 No se puede instanciar directamente, solo derivar.

```cpp
class AMateria {
public:
    virtual void usar() const = 0; // método puro
    virtual ~AMateria() {}
};
```

🧪 **No válido:**

```cpp
AMateria a; // ❌ Error: clase abstracta
```

---

## 🔹 2. Interfaces en C++

📘 **¿Qué es?**
Una **interfaz** es una clase que contiene solo métodos `virtual ... = 0`.
Equivale a interfaces en Java o abstract base classes en Python.

```cpp
class ICharacter {
public:
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
    virtual ~ICharacter() {}
};
```

---

## 🔹 3. Polimorfismo Real: Acceso Dinámico por Punteros

📘 **¿Por qué es necesario?**
Para acceder a comportamiento dinámico, necesitas acceder a objetos derivados por **puntero o referencia a la base**.

```cpp
AMateria* materia = new Hielo();
materia->usar(); // ejecuta Hielo::usar()
```

🎯 Si usas objetos por valor → object slicing.

---

## 🔹 4. Factory Pattern

📘 **¿Qué es?**
Un patrón de diseño donde un objeto **crea** instancias sin saber su tipo exacto.

```cpp
class IMateriaSource {
public:
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};
```

🧪 **Uso:**

```cpp
MateriaSource src;
src.learnMateria(new Cure());

AMateria* m = src.createMateria("cure");
```

🎯 Permite crear objetos a partir de un string → útil para RPG o UI dinámicas.

---

## 🔹 5. Regla de tres en Jerarquías

📘 **¿Qué es?**
Si tu clase gestiona recursos dinámicos (como `new`), **debes implementar**:

| Método                 | ¿Para qué sirve?                |
| ---------------------- | ------------------------------- |
| Constructor por copia  | Copia profunda del recurso      |
| Operador de asignación | Evita fugas en copia-asignación |
| Destructor             | Libera memoria al destruir      |

```cpp
class Character : public ICharacter {
private:
    AMateria* inventario[4];

public:
    Character(const Character& other);            // copia profunda
    Character& operator=(const Character& other); // evitar fuga
    ~Character();                                 // delete[] inventario
};
```

---

## 🔹 6. Ejemplo Completo: Materia RPG

🎯 **Objetivo del proyecto:** Simular habilidades mágicas como materias en Final Fantasy.

🧩 Componentes:

* `AMateria` (abstracta)
* `Cure`, `Ice` (concretas)
* `ICharacter` (interfaz)
* `Character` (implementa ICharacter)
* `IMateriaSource` (interfaz)
* `MateriaSource` (implementa IMateriaSource)

🧠 **Diagrama Simplificado:**

```
           [AMateria] <------ [Ice]
               ↑               ↑
               |               |
       [MateriaSource] --> createMateria("ice")
               |
           [ICharacter]
               ↑
         [Character]
```

🧪 **Ejemplo de uso:**

```cpp
MateriaSource src;
src.learnMateria(new Ice());
ICharacter* me = new Character("me");

AMateria* tmp = src.createMateria("ice");
me->equip(tmp);
me->use(0, *me); // me usa "ice" sobre sí mismo
```

---

## 🔹 7. Errores Comunes

❌ Instanciar clase abstracta directamente
❌ Object slicing: usar objetos por valor
❌ No implementar destructor virtual → memory leaks
❌ Copiar punteros sin copiar los objetos que apuntan (shallow copy)
❌ No inicializar `inventario[]` correctamente

---

## 🔹 8. Buenas Prácticas

✅ Siempre usa punteros para polimorfismo
✅ Usa `virtual ~Base()` incluso en interfaces
✅ Aplica `Rule of Three` en clases con punteros
✅ Protege miembros (`private`) y expón comportamiento (`public`)
✅ Marca funciones sobrescritas con `override`

---

## Autor 🤝💡📬

<div align="center">
  <tr>
	<td align="center">
	  <a href="https://github.com/jfercode">
	   <img src="https://github.com/jfercode.png" width="100px" alt="Javier Fernández Correa" />
		<br />
		<sub><b>Javier Fernández Correa</b></sub>
	  </a>
</div>


## Licencia 📜✅🗝️

Este proyecto está bajo la licencia MIT. ⚖️📄🆓