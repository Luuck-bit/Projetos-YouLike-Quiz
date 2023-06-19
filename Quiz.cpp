
#include <iostream>

int main()
{
    std::cout << "Quiz \n";
    std::cout << " Bem vindo ao quiz, selecione o tema desejado: \n";
    std::cout << "1 - Hardware \n"; 
    std::cout << "2 - Software \n";

    int tema;
    int pontuacao = 0;
    std::cin >> tema;

    switch (tema)
    {
        int um;
    case 1: std::cout << "Hardware \n";
        std::cout << "O que é SocketCPU? \n";
        std::cout << "1 - Conector para Processador \n";
        std::cout << "2 - Conector VGA \n";
        std::cin >> um;
        if (um == 1)
        {
            std::cout << "Parabéns, +10 pontos \n";
            pontuacao = pontuacao + 10;
            std::cout << "Sua atual pontuação é de \n" << pontuacao;
        }
        else 
        {
               std::cout << "Lamento, você errou + 0 pontos \n";
              pontuacao = pontuacao + 0;
               std::cout << "Sua atual pontuação é de " << pontuacao;
        }

        
         std::cout << "Qual a funcao de uma GPU? \n";
         std::cout << "1 - peças responsáveis pelo processamento de imagem nos nossos computadores. \n";
         std::cout << "2 - é uma iso para realizer o download que determinado sistema. \n";
         std::cin >> um;
         if (um == 1)
         {
            std::cout << "Parabéns, +10 pontos \n";
            pontuacao = pontuacao + 10;
            std::cout << "Sua atual pontuação é de \n" << pontuacao;
         }
         else 
         {
            std::cout << "Lamento, você errou + 0 pontos \n";
              pontuacao = pontuacao + 0;
               std::cout << "Sua atual pontuação é de " << pontuacao;
         }

        std::cout << "O que é memória RAM? \n";
        std::cout << "1 - Componente para Limpar Slots de memória. \n";
        std::cout << "2 - Componente para armazenar as informações de maneira temporária. \n";
        std::cin >> um;
        if (um == 2)
        {
            std::cout << "Parabéns, +10 pontos \n";
            pontuacao = pontuacao + 10;
            std::cout << "Sua atual pontuação é de \n" << pontuacao;
        }
        else 
        {
            std::cout << "Lamento, você errou + 0 pontos \n";
              pontuacao = pontuacao + 0;
               std::cout << "Sua atual pontuação é de " << pontuacao;
        }

        std::cout << "Esse é meu primeiro programa C++, valeu por utilizar ele!";
        

break;

         int dois;
    case 2: std::cout << "Software \n";
    std::cout << "O que exatamente é um Software? \n";
    std::cout << "1 - Componentes lógicos \n";
    std::cout << "2 - Componente Fisícos \n";
    
    std::cin >> dois;
    if (dois == 1)
    {
        std::cout << "Parabéns, +10 pontos \n";
        pontuacao = pontuacao + 10;
        std::cout << "Sua atual pontuação é de \n" << pontuacao;
    }

    else 
    {
        std::cout << "Lamento, você errou + 0 pontos \n";
        pontuacao = pontuacao + 0;
        std::cout << "Sua atual pontuação é de \n" << pontuacao;
    }

    std::cout << "Quais as funcoes de um software? \n";
    std::cout << "1 - Software é um agrupamento de comandos escritos em uma linguagem de programação. Estes comandos, ou instruções, criam as ações dentro do programa \n";
                  std::cout << "2 - Softwares são peças que utilizamos para montar Notebook e Androides. \n";
    std::cin >> dois;
    if (dois == 1)
    {
        std::cout << "Parabéns, +10 pontos \n";
        pontuacao = pontuacao + 10;
        std::cout << "Sua atual pontuação é de \n" << pontuacao;
    }
    else 
    {
        std::cout << "Lamento, você errou + 0 pontos \n";
        pontuacao = pontuacao + 0;
        std::cout << "Sua atual pontuação é de \n" << pontuacao;
    }

    std::cout << "É preciso ser bom em matemática para desenvolver softwares? \n";
    std::cout << "1 - Sim, a matemática é extremamente necessária! sem ela a Lógica não flui. \n";
    std::cout << "2 - Quem se dá bem com a matemática tende a compreender com mais facilidade a programação, porém a facilidade com os números não é uma regra para se tornar programador. \n";
    std::cin >> dois;
    if (dois == 2)
    {
        std::cout << "Parabéns, +10 pontos \n";
        pontuacao = pontuacao + 10;
        std::cout << "Sua atual pontuação é de \n" << pontuacao;
    }
    else 
    {
        std::cout << "Lamento, você errou + 0 pontos \n";
        pontuacao = pontuacao + 0;
        std::cout << "Sua atual pontuação é de \n" << pontuacao;
    }

     std::cout << "Esse é meu primeiro programa C++, valeu por utilizar ele!";

        break;


        
    }
        
}

