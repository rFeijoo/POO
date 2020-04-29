## Aula 3

### 1 - Biblioteca *Blynk*

Para recapitular, vamos recriar nossa biblioteca da aula anterior do zero, utilizando os conceitos de *POO*.

> 1. *Blynk.h*
>
> * Crie a classe ```Blynk```, com campo *public* e *private*;
> * Inclua os protótipos públicos ```void begin(int pin);``` e ```void loop(void);```;
> * Crie as variáveis privadas necessárias para a biblioteca;

> 2. *Blynk.cpp*
>
> * Na função ```void begin(int pin);```, armazene a *GPIO* associada ao *LED*, configure este pino como *OUTPUT*, inicialize-o como *LOW*;
> * Na função ```void loop(void);```, inverta o estado do *GPIO*. Lembre-se de utilizar o *Serial Console* caso não tenha *LEDs* a mão;

> 3. *ex03.ino*
>
> * Utilize o arquivo ```/Codigos/Aula03/ex01/ex01.ino```, sem alterá-lo;

### 2 - *Include Guards*

Os *include guards* são estruturas de segurança utilizadas para evitar definições de mesmas variáveis.

Por exemplo, suponha que você tenha os seguintes arquivos:
