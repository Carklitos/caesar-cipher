# Caesar Cipher

Programa en C++ que cifra y descifra texto usando el cifrado César, con un desplazamiento elegido por el usuario.

## Características

- Cifrado y descifrado de texto
- Respeta mayúsculas y minúsculas
- Deja intactos espacios, números y signos de puntuación

## Requisitos

- Compilador de C++ (g++)
- make

## Compilación

```bash
make
```

## Uso

```bash
./main
```

El programa pide el modo (cifrar o descifrar), el texto y el desplazamiento.

### Ejemplo

```
Texto: Hola, Mundo
Desplazamiento: 3
Resultado: Krod, Pxqgr
```

## Estructura del proyecto

```
.
├── main.cc
├── cifrado.h
├── cifrado.cc
├── Makefile
└── README.md
```

## Autor

Carlos Gómez Carrasco