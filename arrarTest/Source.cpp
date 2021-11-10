#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#pragma warning (disable : 4996)

template <class t>
t Max(t a, t b)
{
    //template <class t> används för och kunna slipa overloada funktioner
    // den används för och inte behöva ange datatypen den fixar de automtaiskt
    
    return a > b ? a : b;
}




void oneDArray()
{
    printf("1D Array\n");
    int array1D[5]{ 1, 2, 3, 4, 5 };
    for (size_t i = 0; i < 5; i++)
    {
        printf("Index[%d] Value: %lu\t", i, array1D[i]);
    }
    printf("\n");
}

void twoDArray()
{
    printf("\n2D Array\n");
    int array2D[2][5] = {
        {1, 2, 3, 4, 5},  //Row 0
        {6, 7, 8, 9, 10}    //Row 1
    };
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            printf("Index[%d][%d] Value: %lu\n", i, j, array2D[i][j]);
        }
    }
}

void threeDArray() {
    printf("\n3D Array\n");
    int array3D[3][3][3] =
    {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},                 //Row 0
        {{10, 11, 12}, { 13, 14, 15 }, { 16, 17, 18}},     //Row 1
        {{19, 20, 21}, { 22, 23, 24 }, { 25, 26, 28}}     //Row 2
    };
    //Nested for loop
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t x = 0; x < 3; x++)
        {
            for (size_t y = 0; y < 3; y++)
            {
                printf("Index[%d][%d][%d]: Value: %lu\n", i, x, y, array3D[i][x][y]);
            }
        }
    }
}

string NumToText(int num) 
{

    string numbers[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    for (int i= 0; i<=num; i++)
    {
        if (i == num)
            return numbers[i];
    }
    return "";

}

int numberGenerator(int a) {
    int random;
    srand(rand() ^ time(NULL));
    return random = rand() % (10 - 1 + 1);
    //Random number between 1 and 10.
}

void display()
{
   // int A[7] = { 1,2,3,4,5,6,7 };
   // int B[5] = { 2, 4};
   // int C[] = { 2, 4, 6, 8, 9 , 11 };
    
    // Ett nytt sätt för och skriva ut allt i arrayen ":"
    int A[] = {2, 3, 6, 8, 10 };
    for (int x:A)
    {
        cout << x << endl;
    
    }
    // Addera talen som finns i arrayen
    int B[7] = { 4, 8, 6, 9, 5, 2, 7 };
    int n = 7, sum = 0;

    for (int i=0; i<7; i++)
    {
        sum = sum + B[i];
    
    }

    cout << "Summan av talen i arrayen är: " << sum << endl;


    //Hitta högsta värdet i en array
    //int n är antalet platser som finns i arrayen
    int C[7] = { 3, 5, 6, 80, 20, 40 };
    int max;
    max = C[0];

    for(int i=0; i<7; i++)
    {
        if(C[i]>max)
        {
            max = C[i];
        
        }
    
    }
    cout << "Största värdet i arrayen är: " << max << endl;

    // Linjäar sökning i en array
    int D[10];
    int key;
    cout << "Enter numbers";

    for (int i = 0; i < 10; i++)
    {
        cin >> D[i];
    }

    cout << "Enter key";
    cin >> key;

    for(int i=0; i<10; i++)
    {
        if(key==D[i])
        {
            cout << "Found at: " << i;
           
        
        }
        
    
    }



   

    

}

void binarySearchArray()
{

    int A[10]{ 6, 8, 4, 43, 9, 45, 7, 90, 34, 20 };
    int l = 0, h = 9, key, mid;
    cout << "Enter key: ";
    cin >> key;

    while(l<=h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
        {
            cout << "Found at: " << mid;
            return;

        }
        else if (key < A[mid])
        {
            h = mid - l;

        }
        else

            l = mid + l;
        
        
    }

    cout << "Did not find a key!" << endl;

}

void ForstaOvning()
{
    int A[] = { 10 ,2 ,40 ,3 ,34 ,4 ,5 ,9, 92, 7 };
    int sum= 0, n = 10;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        
    }
    cout << "Summan är: " << sum;
    
}

void AndraOvning()
{
    int A[]{ 4,6,27,15,31,22,30,29,8,16 };
    int n = 10;
    int max = A[0];
    for (int i=0; i<n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }

    cout << "Största nummret är " << max;
}

void tredjeOvning()
{
    int A[] = { 8,4,12,37,36,25,-2,10,15,25 }; 
    int n = 10;
    int min = A[0];

    for (auto i = 0; i < n; i++)
    {
        if (min > A[i])
        {
            min = A[i];
        }
    }
    cout << "Minsta talet är: " << min;

}

void fjardeOvning()
{
    int A[] = { 3,5,-2,9,-4,10,-24,19,81,-7,12,13 };  
    int n = 12;
    int pcount = 0; 
    int ncount = 0;
    
    for(auto i=0; i<n; i++)
    {
        if(A[i]>0)
        {
            pcount = pcount + A[i];
        
        }
        else if(A[i]<0)
        {
            ncount = ncount + A[i];
        }
    
    }
    cout << "Negativa tal summa är: " << ncount << ". Positiva tal summa är: " << pcount;
}

void nestedLoop()
{
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j<=5; j++)
        {
            cout <<"("<< i << ", " << j<<")";
 
        }
        cout << endl;

    }
}

void trekant()
{
    //spegelvänd triangel
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            //if bestämmer vilket håll triangel ska vara
            if (i < j)
            {
                cout << " ";
            }
            else 
            {
                cout << "*";
            
            }
        }
        cout << endl;
    }
}

void fyrkant()
{
    for (int i = 5; i < 10; i++)
    {
        for(int j=0; j<5; j++)
        {
            if (i < j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        
        }
        cout << endl;
    }

}


void rektangel()
{
    for (int i = 10; i < 20; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i < j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }

        }
        cout << endl;
    }


}

void multirationellAraay()
{
    
    int A[2][3] = { 3,3,3,3,3,3 };
    int B[2][3] = { 1, 1, 1, 1, 1, 1 };
    int C[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}


void avarage()
{
    int n;
    float num[100], sum=0.0, average;

    cout << "Skriv in hur många siffor du vill ha i din array: ";
    cin >> n;
    cout << "Skriv nu in sifforna du vill ha med i din array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": ";
        cin >> num[i];
        sum += num[i];
    }
    average = sum / n;
    cout << "Du har matat in " << n << " siffror" << endl;
    cout << "Summan av talen du har matat in är " << sum << endl;
    cout << "Din average är: " << average;

}

void cinGet()
{
    char s[20];
    char s2[20];
    cout << "Enter your name: ";
    cin.get(s, 20);
    cout << "Welcome " << s << endl;
    //cin.ignore används för och kunna använda cin.get igen
    cin.ignore();
    
    cout << "Enter your name again: ";
    cin.get(s2, 20);
    cout << "Welcome " << s2 << endl;
}

void cinGetLine()
{
    char s[20];
    char s2[20];
    cout << "Enter your name: ";
    cin.getline(s, 20);
    cout << "Welcome " << s << endl;
    //Med getLine så behöver vi inte cin.ignore man kan använda den igen.

    cout << "Enter your name again: ";
    cin.getline(s2, 20);
    cout << "Welcome " << s2 << endl;

}

void stringLength()
{
   // char s[20] = "Hello";
   // cout << strlen(s) << endl;
    //s.length = will find out length of string
    //s.size= will also find out length of string
    //s.capacity= will find out the capicty of our array
    //s.resize(30)= is our commando to change capicty
    //s.max.size= gives us the max capacity
    //s.clear= clear a string
    //s.empty= is the string empty?
    char *s= new char;
    cout << "Enter a string: ";
    cin.getline(s,20);
    cout << "Length of your string is: " << strlen(s) << endl;
    string str = "Hello";
    cout << str.length() << endl;
    cout << str.capacity() << endl;
    str.resize(40);
    cout << str.capacity() << endl;
    cout << str.max_size() << endl;
    //Erstätter bokstäver på string, 3 är hur mnga enhter du ska ersätta och 4 är platsen på stringen du ska lägga nya enheterna
    string prog = "programming";
    prog.replace(3, 4, "KK");
    cout << prog << endl;
    //Ersätt tring med en annan
    string programming = "programming";
    string hello = "hello";
    hello.swap(programming);
    cout << hello << endl;
    //Hitta ett ord i din menning i string
    string how = "How are you";
    cout << how.find("are") << endl;
    cout << how.find('o') << endl;
    //Här letar man från höger till vänster istället
    cout << how.rfind('o') << endl;
}

void concantenate()
{
    char s1[20] = "Good ";
    char s2[10] = "morning";

    strcat_s(s1, s2);

    cout << s1 << endl;
}

void stringCopy()
{
    char s1[20] = "Good ";
    char s2[10] = "morning";
    //Den flrsta variablen man lägger i strcpy är den man kopierar till och den andra är den man kopierar ifrån
    strcpy_s(s2, s1);

    cout << s2 << endl;
}

void subString()
{
    //Här skriver man ut resten av den första stringen, och det bestäms av den andra stringen
    char s[20] = "Programming";
    char s1[10] = "g";
    cout << strstr(s, s1) << endl;
    //String
    string str = "programming";
    cout << str.substr(3) << endl;
}

void stringCompete()
{
    //Här jämför vi strings om de är identiska eller inte
    //Första exemplet så är de identiska
    char s1[20] = "hello";
    char s2[20] = "hello";
    cout << strcmp(s1, s2)<< endl;
    //Här är första stringen mindr än den andra
    char s3[20] = "Hello";
    char s4[20] = "hello";
    cout << strcmp(s3, s4) << endl;
    //Här är andra stringen mindre än den första
    //stora boktäverar mindre nummer än de små som till exempel A är 65 och a är 97
    char s5[20] = "Hello";
    char s6[20] = "HEllo";
    cout << strcmp(s5, s6) << endl;
    //string
    string str = "programming";
    string str1 = "programming";
    cout << str.compare(str1);
}

void stringToken()
{
    char s1[20] = "x=10;y=20;z=35";
    cout << strtok(s1, "=;");  
    char*token = strtok(s1, ";");// we say that we toknlize the ";"

    while (token != NULL)//While our token is not equal to nul continue
    {
        cout << token << endl;  
        token = strtok(NULL, ";");//
    }
    

}

void dag2uppgift1()
{
    char s [20] = "welcome";
    cout << strlen(s) << endl;
    int strleng = strlen(s);
    for (int i = 0; i < strleng; i++)
    {
        cout << s[i] << endl;
    }
}

void dag2uppgift2()
{
    char s[20] = "WELCOME";
    int strleng = strlen(s);
    for (int i = 0; i < strleng; i++)
    {
         s[i]=s[i] + 32;
    }
    cout << s << endl;

    char f[20] = "WELCOME";
    for (int i = 0; i < strlen(f); i++)
    {
        if (i % 2 == 0)
        {
            f[i] = f[i] + 32;
        }
    }

    cout << f << endl;
 

}

void dag2uppgift3()
{
    char s[20] = "Hej och valkommen";
    int ord = 1; int vokaler= 0, konstanter= 0;
    for(int i=0; i<strlen(s); i++)
    {
        if ((s[i] == 'a' )|| (s[i] == 'e')|| (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'y'))
        {
            vokaler += 1;
        }
       else if (s[i] == ' ')
       {
           ord++;
        }
        else 
        {
            konstanter++;
        }
    
    }
    cout << "Din menning är: " << s << endl;
    cout << "Din mening har: " << ord << " ord och: " << vokaler << " vokaler och: " << konstanter << " konstanter" << endl;
}

void dag2uppgift5()
{

    string mail;
    cout << "Skriv in ditt mail den ska innehålla '@': ";
    getline(cin, mail);
    int pos = mail.find("@");
    string sub = mail.substr(0, pos);
    cout << "Ditt anvandarenamn är : " << sub;
}



int elementSearch(int e)
{
    int a[] = { 10, 3, 2, 7, 9 };
    int i;
    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        if (e == a[i])
        {
            return i+1;
        }

    }
    return 0;
        

}

class rektangel1
{
public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

void rektangelPointer()
{
    rektangel1 r1;
    rektangel1 *ptr;
    ptr = &r1;
    ptr->length = 10;
    ptr->breadth = 5;
    cout << ptr->area() << endl;
    cout << ptr->perimeter() << endl;
   
    

}


class rektangel2private
{
private:
    int length;
    int breadth;

public:
    void setlength(int l)
    {
        length = l;
    }

    void setBreadth(int b)
    {
        breadth = b;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

void rektangel2Private()
{
    rektangel2private r2;
    r2.setlength(10);
    r2.setBreadth(5);

    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;
    cout << r2.getLength() << endl;
}

class rektangel3
{
    //Det här är ett enkalre sätt från exemplet från rektangel2private
private:
    int length;
    int breadth;
public:

    rektangel3(int l, int b)
    {
        length = (l);
        breadth = (b);
    }

    int area()
    {
        return length * breadth;
    }
};


class rektangel4
{
private:
    int length;
    int breadth;
public:

    rektangel4(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
      
    }

    int area()
    {
        return length * breadth;
    }
};

void rektangel4Main()
{
    rektangel4 r1(10, 5);
    cout << r1.area() << endl;
}

//Uppgift onsdag tredje november

class student
{
private: 
    int roll;
    string name;
    int mathMarks;
    int phyMarks;
    int chemMarks;
public:
    student(int r, string n, int m, int p, int c)
    {
        roll = r;
        name = n;
        mathMarks = m;
        phyMarks = p;
        chemMarks = c;
    }
    int total()
    {
        return mathMarks + phyMarks + chemMarks;
    }
    char grade()
    {
        float average = total() / 3;
        if (average > 60)
        {
            return 'A';

        }
        else if (average >= 40 && average < 60)
        {
            return 'B';
        }
        else return 'C';
    }
};
void uppgiftOnsdagTredjeNov()
{
    int roll;
    string name;
    int m, p, c;
    cout << "Enter roll number of a student: ";
    cin >> roll;
    cout << "Enter name of a student: ";
    cin >> name;
    cout << "Enter marks in 3 subjects: ";
    cin >> m >> p >> c;
    student s(roll, name, m, p, c);
    cout << "Total marks: " << s.total() << endl;
    cout << "Grade of student: " << s.grade() << endl;

}





int main() {

    uppgiftOnsdagTredjeNov();
    return 0;
}

