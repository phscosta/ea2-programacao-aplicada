#include <iostream>

using namespace std;

//Questão 1

//Calcula o tamanho da mensagem
int tam_msg(char* msg)
{
	int tam = 0;

	while(*msg != '\0')
	{
		msg++;
		tam++;
	}

	return tam;
}

//Realiza a troca dos caracteres
void troca_letra (char* normal_msg, char* new_msg, int tam_msg, char subst_l, char new_l)
{
    int q_trocas = 0;
    char save_new_msg;

    for (int n = 0; n < tam_msg; n++) {
        if (normal_msg[n] == subst_l)
        {
            new_msg[n] = new_l;
            save_new_msg = (char)*(new_msg + n);
            cout << save_new_msg;

            q_trocas++;
        }
        else
        {
            save_new_msg = (char)*(normal_msg + n);
            cout << save_new_msg;
        }
    }

    cout << endl;

    cout << q_trocas;

}

int main ()
{
    char* normal_msg = new char[100];
    char* alt_msg = new char[100];
    char subst_digito, new_digito, save_msg;
    int tam, num_troca;

    cout << "Digite sua mensagem: ";
    cin >> normal_msg;

    tam = tam_msg(normal_msg);

    cout << "Digite a letra a ser substituida: ";
    cin >> subst_digito;

    cout << "Digite a nova letra: ";
    cin >> new_digito;

    //Retorno da mensagem original
    for (int i = 0; i < tam; i++)
    {
        save_msg = (char)*(normal_msg + i);
        cout << save_msg;
    }

    cout << endl;

    //Retorno da palavra modificada e da quantidade de trocas
    troca_letra(normal_msg, alt_msg, tam, subst_digito, new_digito);

    return 0;
}