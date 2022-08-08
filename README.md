# Desafio LTrace 
Leonardo Gabriel Ferreira Rodrigues

leonardogfrodrigues@gmail.com
__________________
## :snake: Parte 1 - Plugin de segmentação em python para o 3DSlicer

Disponível em: [AssignmentFromLeo.zip](https://github.com/leonardogfrodrigues/ltrace/blob/main/AssignmentFromLeo.zip)
__________________
## :bar_chart: Parte 2 - Histograma de ocorrência de letras em C++

Esta aplicação consiste em contar a quantidade de ocorrências de cada letra presente em um determinado arquivo txt.

### :computer: Requisições

- C++ versão 11;
- GNU Compiler Collection do tipo G++;
- CMAKE versão 3.22.1 (para futuras versões).

Compatível com:
- MSVC v19.24
- GCC 9.2 
- Clang 9.0.0

### Como Compilar e Executar

Clone o repositório:
```
git clone https://github.com/leonardogfrodrigues/ltrace.git
```
Acesse as pastas "ltrace/src/": 

```
cd ltrace/src/
```

**GCC 9.2**
```
gcc histograma.cpp -lstdc++ -o histogram
```

```
./histogram ./COPYING/file.txt ./README/file.txt
```

**Clang**

```
clang++ -Wall -std=c++11 histograma.cpp -o
```

```
./histograma ./COPYING/file.txt ./README/file.txt  
```

**G++ para MSVC**
```
g++ histograma.cpp -o histograma
```

```
./histograma ./COPYING/file.txt ./README/file.txt  
```
