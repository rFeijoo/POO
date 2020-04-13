// Estrutura de segurança "#include guards"
#ifndef _BLINK_H
  #define _BLINK_H

  // Definição da Classe "Blink"
  class Blink
  {
    // Área pública, ou seja, permitida ao usuário
    public:
      void ft_begin(int Pin);   // Definição da função "ft_begin()"
      void ft_blink(int qnt);   // Definição da função "ft_blink()"

    // Área privada, ou seja, restrita ao usuário
    private:
      int pin_;                 // Variável para armazenamento do pino de saída (LED)
  };

#endif /*_BLINK_H*/
