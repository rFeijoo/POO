## Programação Orientada a Objetos

### Desafio Final
Desenvolva um sistema capaz de ler um sinal analógico [0 ~ 5v] e operar conforme o seguinte protocolo:

* Ler o sinal de entrada a cada 5s e armazenar em um buffer com protótipo ```firstLevel[6]```, totalizando 30 segundos;
* Após preencher as 6 posições do vetor "firstLevel", realizar a média simples desses valores e armazena-lo em um buffer com protótipo ```secondLevel[4]```, totalizando 2 minutos;
* Por fim, após preencher as 4 posições do vetor "secondLevel", realizar a média simples desses valores e armazena-los em um buffer com protótipo ```thirdLevel[5]```, totalizando 10 minutos;
* **NÃO UTILIZE DELAY()**

Ou seja, seu sistema deverá imprimir:

|Amostra|0|1|2|3|4|5|6|7|8|9|10|11|12|13|14|15|16|...
|-------|-|-|-|-|-|-|-|-|-|-|--|--|--|--|--|--|--|--
| Tempo(s) |0|5|10|15|20|25|30|60|90|120|150|270|390|510|630|750|870|...
| Buffer| frst[0] | frst[1] | frst[2] | frst[3] | frst[4] | frst[5] | scnd[0] | scnd[1] | scnd[2] | scnd[3] | third[0] | third[1] | third[2] | third[3] | third[4] | third[0] | third[1] | ...

Ainda, você deverá criar SOMENTE os seguintes arquivos:
* Library.h
* Library.cpp

Utilize o arquivo "desafio.ino" SEM ALTERÁ-LO.

> OBS: se achar razoávelmente fácil, tente fazer o mesmo exercício para 3 sinais de entrada. Utilize, somente, os mesmos arquivos criados, sem novos.
