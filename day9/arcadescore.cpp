#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

class Player{
    private:
        int score;
        std::string name;
    public:
        int GetScore();
        std::string GetName();

        void SetValue(std::string& nm, int& sc);

        void display();

        bool operator<(const Player& other);
};

int Player::GetScore(){
    return score;
}

std::string Player::GetName(){
    return name;
}

void Player::SetValue(std::string& nm, int& sc){
    score = sc;
    name = nm;
}

void Player::display(){
    std::cout<<score<<"\t"<<name<<std::endl;
}

bool Player::operator<(const Player& other){
    return score < other.score;
}

void checkInput(std::string& in, std::string& nama){
    if(in == "c" || in == "C"){
        in == "c";
    }else{
        nama = in;
    }
}

void tebakan(int& input, int& scr){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution distrib(1, 10);

    int tebakan = distrib(gen);
    
    std::cout<<"Jawabannya adalah "<<tebakan<<std::endl;

    scr = abs(tebakan - input);
    if(scr == 0){
        std::cout<<"Selamat! Kamu Benar ";
    }else if(scr <= 2){
        std::cout<<"Hampir! ";
    }else{
        std::cout<<"Kurang Beruntung ";
    }
    std::cout<<"Score Kamu "<<scr<<std::endl;
}

bool checkPlayer(std::vector<Player>& players, Player& in){
    bool isSame = false;
    for(int i=0;i<players.size();i++){
        if(in.GetName() == players[i].GetName()){
            players[i] = in;
            isSame = true;
        }
    }
    return isSame;
}

int main(){
    std::vector<Player> players;
    std::string input;

    do{
        int inputTebakan, score;
        std::string inputNama;
        
        std::cout<<"\nMasukan Nama atau ketik 'c' dan enter untuk keluar ";
        std::cin>>input;
        checkInput(input, inputNama);

        if(input == "c") break;

        std::cout<<"\nSilakan menebak angka dari 1 sampai 10 : ";
        std::cin>>inputTebakan;
        tebakan(inputTebakan, score);

        Player pl;
        pl.SetValue(inputNama, score);
        if(!checkPlayer(players, pl))
            players.push_back(pl);
        
        std::sort(players.begin(), players.end());

        std::cout<<"Peringkat saat ini"<<std::endl;
        for(int i=0;i < players.size();i++){
            players[i].display();
        }

    }while(input != "c");
    
    return 0;
}