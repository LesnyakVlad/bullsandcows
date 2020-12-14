/* #include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;

void simple_example(int size)
{
    vector< char > ivec( size );
    char ia[size];
    for ( int ix = 0; ix < size; ++ix )
        ia[ ix ] = ivec[ ix ];
    return ia[ size ];
}




void Split(int x, int& a, int& b, int& c, int& d){
    d = x % 10; x /= 10;
    c = x % 10; x /= 10;
    b = x % 10; x /= 10;
    a = x % 10; if (x % 10 == 0){a = 0;}}

bool invalid(int x){
    int a, b, c, d;
    Split(x, a, b, c, d);
    bool all;
    return
            (a >= 0) && (a <= 9) &&
            (a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d);}

bool Matches(int n1, int n2, int bulls, int cows){
    int a1, b1, c1, d1, a2, b2, c2, d2;
    Split(n1, a1, b1, c1, d1);
    Split(n2, a2, b2, c2, d2);
    return
            bulls == (
                (a1 == a2) + (b1 == b2) + (c1 == c2) + (d1 == d2)) &&
            cows == (
                (a1 == b2) + (a1 == c2) + (a1 == d2) +
                (b1 == a2) + (b1 == c2) + (b1 == d2) +
                (c1 == a2) + (c1 == b2) + (c1 == d2) +
                (d1 == a2) + (d1 == b2) + (d1 == c2));}

const int setSize = 10000;
bool badNum[setSize];


void printVectorInt(vector<int> v);

int main(int argc, char **argv)
{
    cout << "<1> Guess the number (player)\n" << "<2> PvP\n" << "<3> Guess the number (computer)\n";
    int mode;
    cin >> mode;
    if (mode == 1){
        int random1, random2, random3, random4;
        random1 = 0; random2 = 0; random3 = 0; random4 = 0;
        while((random1 == random2) or (random1 == random3) or (random1 == random4)
              or (random2 == random3) or (random2 == random4) or (random3 == random4)){
            srand(time(NULL));
            int random = rand() % 10000;
            int kk = random;
            random1 = random % 10;
            random /= 10;
            random2 = random % 10;
            random /= 10;
            random3 = random % 10;
            random /= 10;
            random4 = random % 10;
            random = kk;
        }

        int bulls1, cows1;
        bulls1 = 0;

        while(bulls1 !=4){
            cout << "\n" << "Write number: ";
            int chel;
            cin >> chel;
            int chel1, chel2, chel3, chel4;
            int chel0 = chel;
            chel1 = chel % 10;
            chel /= 10;
            chel2 = chel % 10;
            chel /= 10;
            chel3 = chel % 10;
            chel /= 10;
            chel4 = chel % 10;
            chel /= 10;
            if ((chel1 == chel2) or (chel1 == chel3) or (chel1 == chel4)
                    or (chel2 == chel3) or (chel2 == chel4) or (chel3 == chel4) or
                    (chel0 < 100) or (chel0>9999)){
                cout << "Ne rabotaet\n";
            }else{
                bulls1 = 0; cows1 = 0;
                if (chel1 == random1){
                    bulls1 = bulls1 + 1;
                } else {
                    if ((chel1 == random2) or (chel1 == random3) or (chel1 == random4)){
                        cows1 = cows1 + 1;
                    }}
                if (chel2 == random2){
                    bulls1 = bulls1 + 1;
                } else {
                    if ((chel2 == random1) or (chel2 == random3) or (chel2 == random4)){
                        cows1 = cows1 + 1;
                    }}
                if (chel3 == random3){
                    bulls1 = bulls1 + 1;
                } else {
                    if ((chel3 == random1) or (chel3 == random2) or (chel3 == random4)){
                        cows1 = cows1 + 1;
                    }}        if (chel4 == random4){
                    bulls1 = bulls1 + 1;
                } else {
                    if ((chel4 == random1) or (chel4 == random2) or (chel4 == random3)){
                        cows1 = cows1 + 1;
                    }
                }              if (bulls1 == 4){if (chel0 / 1000 == 0){
                        cout << "Conclead sequence: " << 0 << chel0;} else { cout << "Conclead seques:" << chel0;}}
                else {cout << "Bulls = " << bulls1 << " Cows = " << cows1;}
            }}}

    int bulls2 = 0;

    if (mode == 2){ while (bulls2 != 4){
            cout << "Write number: ";
            int player;
            cin >> player;
            int player1,player2,player3,player4;
            player1 = player % 10;
            player /= 10;
            player2 = player % 10;
            player /= 10;
            player3 = player % 10;
            player /= 10;
            player4 = player % 10;
            if ((player1 == player2) or (player1 == player3) or (player1 == player4)
                    or (player2 == player3) or (player2 == player4) or (player3 == player4)
                    or (player1 > 9) or (player1 < 0) or (player2 > 9) or (player2 < 0)
                    or (player3 > 9) or (player3 < 0)
                    or (player4 > 9) or (player4 < 0)){cout << "Ne rabotaet.\n";}
            else{
                for (int popa = 1; popa<35; popa++){cout << " \n";}
                cout << "Guess the number!\n" ;
                int cows2 = 0;
                int player11,player12,player13,player14;
                int player111;
                while(bulls2 != 4){
                    bulls2 = 0; cows2 = 0;
                    cout << "Write number: ";
                    cin >> player111;
                    int k;
                    k = player111;
                    player11 = player111 % 10;
                    player111 /= 10;
                    player12 = player111 % 10;
                    player111 /= 10;
                    player13 = player111 % 10;
                    player111 /= 10;
                    player14 = player111 % 10;
                    player111 = k;
                    if ((player11 == player12) or (player11 == player13) or (player11 == player14)
                            or (player12 == player13) or (player12 == player14) or (player13 == player14)
                            or (player11 > 9) or (player11 < 0) or (player12 > 9) or (player12 < 0)
                            or (player13 > 9) or (player13 < 0)
                            or (player14 > 9) or (player14 < 0)){cout << "Ne rabotaet.\n";}
                    else{
                        if (player11 == player1){
                            bulls2 = bulls2 + 1;
                        } else {if ((player11 == player2) or (player11 == player3) or (player11 == player4)){
                                cows2 = cows2 + 1;
                            }}
                        if (player12 == player2){
                            bulls2 = bulls2 + 1;
                        } else {if ((player12 == player1) or (player12 == player3) or (player12 == player4)){
                                cows2 = cows2 + 1;
                            }}
                        if (player13 == player3){
                            bulls2 = bulls2 + 1;
                        } else {if ((player13 == player1) or (player13 == player2) or (player13 == player4)){
                                cows2 = cows2 + 1;
                            }}
                        if (player14 == player4){
                            bulls2 = bulls2 + 1;
                        } else {if ((player14 == player1) or (player14 == player2) or (player14 == player3)){
                                cows2 = cows2 + 1;
                            }}
                        cout << "Bulls = " << bulls2 << " Cows = " << cows2 << "\n";
                    }}

                if (bulls2 == 4)
                { if (player111 / 1000 == 0){
                        cout << "Conclead sequence: " << 0 << player111;
                    } else {cout << "Conclead sequence: " << player111; }}

            }
        }
    }

    if (mode == 3){
        for (int i = 0; i < setSize; i++)
            badNum[i] = !invalid(i);
        while (true)
        {
            int bulls, cows;
            int question;
            for (question = 0; question < setSize && badNum[question]; question++);
            if (question >= setSize)
            {
                cout << "Nepravilno!";
                break;
            }
            if (question / 1000 == 0){
                cout << 0 << question << "\n";
            } else {
                cout << question << "\n";
            }
            cout << "bulls, cows: ";
            cin >> bulls >> cows;
            if (bulls == 4 && cows == 0)
            { if (question / 1000 == 0) {
                    cout << "Conclead sequence:" << 0 << question;
                    break;
                } else {
                    cout << "Conclead sequence:" << question;
                    break;
                }}
            for (int i = 0; i < setSize; i++)
                badNum[i] = badNum[i] || !Matches(i, question, bulls, cows);
        }


    }
}

vector<int> initialGameNumbers();

vector<int> getUserNumbers();

vector<int> checkBullsAndCows(vector<int> v1, vector<int> v2);

vector<int> initialGameNumbers()
{
    srand(time(0));

    vector<int> seq;
    for(int i = 0; i < 10; i++)
        seq.push_back(i);

    vector<int> ret;
    for(int i = 0; i < 4; i++)
    {
        int pos = rand() % seq.size();

        ret.push_back(seq[pos]);
        seq.erase(seq.begin() + pos);

         cout << "step " << i << endl;
         printVectorInt(seq);
         cout << endl;
         printVectorInt(ret);
         cout << endl << endl;

    }
    return ret;
}

vector<int> getUserNumbers()
{
    vector<int> ret;

    cout << "Write 4 numbers(help<enter>):" << endl;
    int n;
    for(int i = 0; i < 4; i++)
    {
        cin >> n;
        ret.push_back(n);
    }

    return ret;
}

vector<int> checkBullsAndCows(vector<int> v1, vector<int> v2)
{
    vector<int> ret(2);
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(v1[i] == v2[j])
            {
                if(i == j)
                    ret[0] += 1;
                else
                    ret[1] += 1;

                break;
            }
        }
    }
    return ret;
}

void printVectorInt(vector<int> v)
{
    vector <int>::iterator cur;
    for(cur = v.begin(); cur < v.end(); cur++)
        cout << *cur << " ";
}
*/
