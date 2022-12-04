#include <iostream>
#include <sstream>

using namespace std;

void utforBerakning(string uttryck)
{
   int a,b;
   char op;

   istringstream datastrom(uttryck);
   datastrom >> a >> op >> b;
   bool ok = !datastrom.fail();
   if (ok)
   {
       char dum;
       datastrom >> dum;
       ok = datastrom.fail();
   }

   if(ok)
   {
       if(op == '+') cout <<a+b <<endl;
       else if (op == '-') cout <<a-b <<endl;
       else if (op == '*') cout <<a*b <<endl;
       else if (op == '/') cout <<a/b <<endl;
       else if (op == '%') cout <<a%b <<endl;
       else ok = false;
   }
   if(!ok)
       cout<<"förstår ej!" <<endl;
}

void huvudLoop()
{
    cout<<"Välkommen till kommandotolk!"<<endl;

    while(true)
    {
        string textrad;
        textrad = "";
        getline(cin,textrad);
        if(textrad == "")
            continue;
        if(textrad == "exit")
            break;
        utforBerakning(textrad);
    }
    cout <<"(lämnar kommandotolk)" <<endl;
}

void ingangTillKap09Kommandotolk()
{
    huvudLoop();
}
