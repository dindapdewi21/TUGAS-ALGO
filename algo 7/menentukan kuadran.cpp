#include<iostream>
using namespace std;

class kuadran
{
public:
    int x;
    int y;

    void input()
    {
        cout<<"====================DINDA PUSPITA DEWI========================"<<endl;
        cout<<"===============MENGETAHUI KUADRAN SUATU KORDINAT=============="<<endl;
        cout<<"X =";cin>>x;
        cout<<"Y =";cin>>y;
        cout<<"Kordinat titik(x,y) ="<<x<<" "<<y<<endl;
    }

    void output ()
    {
        if(x>0&&y>0)
        {
            cout<<"kuadran I"<<endl;
        }
        else if(x<0&&y>0)
        {
            cout<<"kuadran II"<<endl;
        }
        else if(x<0&&y>0)
        {
            cout<<"kuadran III"<<endl;
        }
        else
        {
            cout<<"kuadran IV"<<endl;
        }
    }
};
int main()
{
kuadran a;
a.input();
a.output();
}
