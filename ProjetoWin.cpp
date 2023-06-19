

#include <iostream>

int resposta;
int opcao;
using namespace std;

void instrucao(){
	cout << "Nesse Programa, para selecionar a opcao desejada voce ira utilizar apenas Numeros, por exemplo:\n";
	cout << "1 - Um\n";
	cout << "2 -  Dois\n";
	cout << "3 - Tres\n";
	cout << "se quiser selecionar a opção 1, digite 1 e vice-versa;\n";


}


int main()
{
	

   cout << "Projeto YouLike Isaac Batista; Joao Vitor.\n";
   cout << "Ola, nesse Programa, para selecionar a opcao desejada voce ira utilizar apenas Numeros, por exemplo:\n";
   cout << "1 - Um\n";
   cout << "2 -  Dois\n";
   cout << "3 - Tres\n";
   cout << "se quiser selecionar a opcao 1, digite 1 e vice-versa;\n";
   cout << "Voce entedeu?\n";
   cout << "1 - sim\n";
   cout << "2 - nao\n";
   cin >> resposta;
   if (resposta == 1) {
	   cout << "Perfeito, vamos ao que interessa!\n";
   }
   else {
	   instrucao();
   }
   cout << "Neste Executavel, mostraremos alguns problemas, suas causas e solucoes\n";
do{   
  cout << "........................................................................................................................................................................." << endl;
  cout << "1.Lentidao no computador\n";
   cout << "2.Computador desligando sozinho\n";
	cout << "3.Computador trava sozinho\n";
	 cout << "4.O Computador não liga\n";
	   cout << "5.Aparecendo propagandas\n";
	cout << "6.Aparece tela “Azul da Morte”\n";
   cout << "7.Apagar / ocultar arquivos e pastas sozinho\n";
  cout << "8.Não carrega o Windows\n";
		cout << "9.Ajuda\n";
		cout << "10.Sair" << endl;
		cin >> opcao;
		
		int qualcos;
	switch (opcao) 
	{
	case 1:
		cout << "Lentidao em um computador\n";
		cout << "Deseja ver as causas ou solucoes?\n";
		cout << "............................................................................................................................................................." << endl;
		cout << "1 - Causas\n";
		cout << "2 - Solucoes\n";
		cin >> qualcos;
		if (qualcos == 1) {
			cout << "Lentidao no computador pode se dar por diversas causas, algumas delas sao: \n";
			cout << "1 - Infeccao por malware: A presenca de malware, como virus, spyware ou adware, pode afetar significativamente o desempenho do computador. \n";
			cout << "............................................................................................................................................................." << endl;
			cout << "2 - Sobreaquecimento do sistema: Se o computador superaquecer, isso pode levar a problemas de desempenho. \n";
		}
		else {
			cout << "1 - Infeccao por Malware: Utilize software antivirus e antimalware: Ter um programa antivirus confiavel instalado no computador e essencial para detectar e remover malware." << endl;
			cout << "............................................................................................................................................................." << endl;
			cout << "2 - Sobreaquecimento: Limpeza e ventilacao adequadas: O acumulo de poeira e sujeira dentro do computador pode obstruir os ventiladores e dissipadores de calor, reduzindo sua eficiencia na remocao do calor gerado pelos componentes internos. " << endl;
		}
		break;

	      case 2:
		     cout << "Computador desligando sozinho?" << endl;
			 cout << "Deseja ver as causas ou solucoes?" << endl;
			 cout << "............................................................................................................................................................." << endl;
			 cout << "1 - Causas\n";
		     cout << "2 - Solucoes\n";
		     cin >> qualcos;
			 if (qualcos == 1){
				cout << "Fonte de alimentacao defeituosa: Se a fonte de alimentacao do computador estiver com problemas, como superaquecimento, falha de energia ou danos nos componentes internos, ela pode fazer com que o computador desligue abruptamente. " << endl;
				cout << "............................................................................................................................................................." << endl;
				cout << "Problemas de software: Algumas falhas de software podem causar desligamentos inesperados do computador. Isso pode incluir drivers desatualizados ou incompativeis, virus ou malware." << endl;
			 }
			 else {
				cout << "Fonte de alimentacao: A solucao para uma fonte de alimentacao defeituosa é substitui-la por uma nova e funcional, mas com a maquina desligada!" << endl;
				cout << "............................................................................................................................................................." << endl;
				cout << "Problemas de software: Atualizar o OS, Varredura com Antivirus confiavel, Desinstale programas problematicos." << endl;
			 }
			 break;
			 
		        case 3:
				// computador travando sozinho
				cout << "Computador travando sozinho?" << endl;
			 cout << "Deseja ver as causas ou solucoes?" << endl;
			 cout << "............................................................................................................................................................." << endl;
			 cout << "1 - Causas\n";
		     cout << "2 - Solucoes\n";
		     cin >> qualcos;
			 if (qualcos == 1){
				cout << "Alguns dos principais motivos incluem problemas com o sistema operacional, programas com bugs e falhas, virus, malwares e spyware. " << endl;
				cout << "............................................................................................................................................................." << endl;
				cout << "Problemas com o hardware como pecas, memoria RAM e placa mae, e tambem o envelhecimento do computador e falta de manutencao. " << endl;
			 }
			 else {
				cout << "Uma solucao para virus, spyware e malware e usar um programa antivirus. Existem varias opcoes disponiveis no mercado, incluindo o Norton Antivirus, Kaspersky Lab, Avira Antivirus Pro, Bitdefender Internet Security e Malwarebytes. " << endl;
				cout << "............................................................................................................................................................." << endl;
				cout << "Existem algumas etapas que podem ajudar a solucionar problemas de memoria e placa mae. Algumas dessas etapas incluem carregar a configuracao padrão do BIOS ou atualiza-la para a versão mais recente, usar um modulo de memoria compativel com o seu processador, colocar o modulo de memoria em apenas um canal e testar a placa-mae com outro processador compativel. " << endl;
			 }
			 break;
                      case 4: //Não Ligaa
			  cout << "Computador não liga: " << endl;
			 cout << "Deseja ver as causas ou solucoes?" << endl;
			 cout << "............................................................................................................................................................." << endl;
			 cout << "1 - Causas\n";
		     cout << "2 - Solucoes\n";
		     cin >> qualcos;
			 if (qualcos == 1){
				cout << "Podem ser problemas com a fonte de alimentação ou problemas na placa-mae. " << endl;
				cout << "............................................................................................................................................................." << endl;
				cout << "Alem de problemas com a fonte de alimentação e placa-mae, outras causas possíveis para um computador não ligar incluem problemas com o processador, placa de video, HD ou tela. " << endl;
			 }
			 else {
				cout << "Problemas com a fonte podem ser resolvidor limpando ela, verificando se funciona corretamente, e em ultima instancia trocando a mesma. o processador segue a mesma trilha." << endl;
				cout << "............................................................................................................................................................." << endl;
				cout << "Problemas com a Placa de video, processador, HD ou tela, podem ser resolvidos verificando se funciona corretamente, e em última instancia trocando os mesmos." << endl;
			 }
			 break;

					         case 5: //Propagandas no Desktop 
				 cout << "Computador com propandas enchendo o saco? " << endl;
			 cout << "Deseja ver as causas ou solucoes?" << endl;
			 cout << "............................................................................................................................................................." << endl;
			 cout << "1 - Causas\n";
		     cout << "2 - Solucoes\n";
		     cin >> qualcos;
			 if (qualcos == 1){
				cout << "A presenca de Malwares ou adware podem ser as causas do seu problema. " << endl;
				cout << "............................................................................................................................................................." << endl;
				cout << "ou ate mesmo extensao do navegador que exibe os conteudos indesejados. " << endl;
			 }
			 else {
				cout << "A utilização de um software para remocao desses virus pode ser uma boa pratica;" << endl;
				cout << "............................................................................................................................................................." << endl;
				cout << "verifique as extensoes do seu navegador." << endl;
			 }
			 break;

							        case 6: // Tela azul
									cout << "Computador com tela azul? " << endl;
	std::cout << "  _______  \n";
    std::cout << " |       | \n";
    std::cout << " |  BLUE | \n";
    std::cout << " | SCREEN| \n";
    std::cout << " |_______| \n";
			 cout << "Deseja ver as causas ou solucoes?" << endl;
			 cout << "............................................................................................................................................................." << endl;
			 cout << "1 - Causas\n";
		     cout << "2 - Solucoes\n";
		     cin >> qualcos;
			 if (qualcos == 1){
				cout << "Algumas possiveis causas para a tela azul incluem conflitos de hardware, como problemas com a placa de video, placa mae ou processador, e memoria RAM defeituosa, suja ou mal encaixada. " << endl;
				cout << "............................................................................................................................................................." << endl;
				cout << "Outra possivel causa para a tela azul pode ser a presenca de virus ou malware que afetam o sistema operacional. " << endl;
			 }
			 else {
				cout << "Revise seu conjunto de peças, veja se esta devidamente limpo, devidamente encaixado e tente novamente." << endl;
				cout << "............................................................................................................................................................." << endl;
				cout << "A utilizacao de um software para remocao desses virus pode ser uma boa pratica." << endl;
			 }
			 break;

									       case 7: //Apagar e ocultar arquivos sozinhos
				 cout << "Computador com ocultacao de arquivos e apagando seus documentos? " << endl;
			 cout << "Deseja ver as causas ou solucoes?" << endl;
			 cout << "............................................................................................................................................................." << endl;
			 cout << "1 - Causas\n";
		     cout << "2 - Solucoes\n";
		     cin >> qualcos;
			 if (qualcos == 1){
				cout << "Novamente, a causas mais comum para isso e a presença de Virus e Malwares. e mais comum que o Hardware. " << endl;
				cout << "No entanto..." << endl;
				cout << "............................................................................................................................................................." << endl;
				cout << "Problemas físicos no disco rígido, como setores defeituosos, erros de leitura/gravação ou corrupção do sistema de arquivos, podem resultar na exclusão involuntária de arquivos pelo Windows. " << endl;
			 }
			 else {
				cout << "A utilizacao de um software para remocao desses virus pode ser uma boa pratica;" << endl;
				cout << "............................................................................................................................................................." << endl;
				cout << "Se o problema for causado por erros de hardware, e importante identificar qual componente de hardware esta causando o problema. Voce pode usar ferramentas de diagnostico de hardware para verificar se ha problemas com o disco rigido, memoria RAM ou outros componentes." << endl;
			 }
			 break;

										          case 8: // Não carrega o windows
					cout << "Não carregar o windows e realmente estressante, vamos la: " << endl;
			 cout << "Deseja ver as causas ou solucoes?" << endl;
			 cout << "............................................................................................................................................................." << endl;
			 cout << "1 - Causas\n";
		     cout << "2 - Solucoes\n";
		     cin >> qualcos;
			 if (qualcos == 1){
				cout << "Se o Windows nao esta carregando, pode haver varias causas possiveis. Algumas possiveis causas incluem problemas com o hardware, como memoria RAM defeituosa ou mal encaixada." << endl;
                cout << "............................................................................................................................................................." << endl;
				cout << "aquecimento do processador, problemas com o disco rigido ou corrupçao do sistema de arquivos. Tambem pode ser causado por problemas de software, como arquivos corrompidos ou infecçao por virus ou malware  " << endl;
			 }
			 else {
				cout << "Se o problema for causado por memoria RAM defeituosa ou mal encaixada, voce pode tentar remover e reinstalar a memoria RAM para garantir que ela esteja encaixada corretamente." << endl;
				cout << "............................................................................................................................................................." << endl;
				cout << "Para resolver problemas de aquecimento do processador, voce pode verificar se o cooler do processador esta funcionando corretamente e se a pasta termica esta aplicada corretamente. Tambem e importante garantir que o gabinete do computador tenha ventilacao adequada para permitir a circulacao de ar." << endl;

                cout << "Para resolver problemas com o disco rigido ou corrupcao do sistema de arquivos, voce pode usar ferramentas de diagnostico de disco para verificar se ha erros e tentar repara-los. Em alguns casos, pode ser necessario substituir o disco rigido por um novo." << endl;

cout << "Para resolver problemas de software, como arquivos corrompidos ou infeccao por vírus ou malware, voce pode usar ferramentas de diagnostico de software para verificar se ha problemas e tentar repara-los. E importante manter o sistema operacional e os programas atualizados com as ultimas correcoes de seguranca e usar um programa antivirus para proteger o computador contra virus e malware." << endl;
			 }
			 break;

												         case 9: // ajuda (burro)
														 instrucao();
														 break;

     case 10:
cout << "Y   Y" << endl;
cout << " Y Y " << endl;
cout << "  Y  " << endl;
cout << "  Y  " << endl;
cout << "  Y  " << endl;
cout << " ooo " << endl;
cout << "o   o" << endl;
cout << "o   o" << endl;
cout << "o   o" << endl;
cout << " ooo " << endl;
cout << "U   U" << endl;
cout << "U   U" << endl;
cout << "U   U" << endl;
cout << "U   U" << endl;
cout << " UUU " << endl;
cout << "L     I   K   K  EEEE" << endl;
cout << "L     I   K  K   E" << endl;
cout << "L     I   KK     EEE" << endl;
cout << "L     I   K  K   E" << endl;
cout << "LLLL  I   K   K  EEEE" << endl;
	 return 0;
	 break;

     default:
	 cout << "Selecione a opcao desejada" << endl;
	 break;

	}
}while(opcao != 10);






}

