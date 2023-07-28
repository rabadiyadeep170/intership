#include <iostream>
using namespace std;
class intership1
{
    public:
    int opt , Day , slct , Fee , pay , pmt, OnOf;
    float price;
    char name[30] , gmail[30];
    double number;

    void gain()
    {
        cout << endl << "\t" << "WELCOME TO EVERYONE MY COMPANY D33PXT " << endl << endl;
        cout << "Enter Your Name : ";
        cin >> name;

        cout << endl << "Enter Your Number : ";
        cin >> number;

        cout << endl << "Enter Your Gmail : ";
        cin >> gmail;

        cout << endl << "\t" <<"WE HAVE DONE INTERSHIP FOR SO MANY DAYS !!" << endl << endl;
        cout << "SELECT YOUR DAYS " << endl;
        cout << "[1] 15 Days" << endl;
        cout << "[2] 30 Days" << endl;
        cout << "[3] 45 Days" << endl;
        cout << "[4] 60 Days" << endl;

        cout << endl << "How many Days To intership : ";
        cin >> Day;

        switch(Day)
        {
            jump:
            case 1:
            {
                cout << "15 Days To intership " << endl;
            }
            break;

            case 2:
            {
                cout << "30 Day To intership" << endl;
            }
            break;

            case 3:
            {
                cout << "45 Day To intership" << endl;
            }
            break;

            case 4:
            {
                cout << "60 Day To intership" << endl;
            }
            break;

            default:
            {
                cout << "Pls Try Again" << endl;
                goto jump;
            }
        }
    }
};
class intership2 : public intership1
{
    public:

    void day15()
    {
        if(Day==1)
        {
            cout << endl << "\t" << "Select The Cource"<< endl << endl;

            cout << "[1] PYTHON" << endl;
            cout << "[2] GO" << endl;
            cout << "[3] HTML + CSS" << endl;
            cout << "[4] SQL" << endl;
            cout << "[5] RUBY" << endl;
            cout << "Enter The Any One Language = ";
            cin >> slct;

            switch(slct)
            {
                jump:
                case 1:
                {
                    cout << "NICE CHOICE PYTHON LANGUAGE" << endl;
                    cout << "PYTHON FEE = 350" << endl << endl;
                    Fee = 350;
                }
                break;

                case 2:
                {
                    cout << "NICE CHOICE GO LANGUAGE" << endl;
                    cout << "GO FEE = 320" << endl << endl;
                    Fee = 320;
                }
                break;

                case 3:
                {
                    cout << "NICE CHOICE HTML + CSS LANGUAGE" << endl;
                    cout << "HTML + CSS FEE = 400" << endl << endl;
                    Fee = 400;
                }
                break;

                case 4:
                {
                    cout << "NICE CHOICE SQL LANGUAGE" << endl;
                    cout << "SQL FEE = 330" << endl << endl;
                    Fee = 330;
                }
                break;


                case 5:
                {
                    cout << "NICE CHOICE RUBY LANGUAGE" << endl;
                    cout << "RUBY FEE = 300" << endl << endl;
                    Fee = 300;
                }
                break;

                default:
                {
                    cout << "Please Enter valid Number---!";
                    goto jump;
                }
            }
        }
    }
};
class intership3 : public intership2
{
    public:

    void day30()
    {
        if(Day==2)
        {
            cout << "\t" << "Select The Cource"<< endl << endl;

            cout << "[1] PYTHON" << endl;
            cout << "[2] JAVA" << endl;
            cout << "[3] JAVA SCRIPT" << endl;
            cout << "[4] PHP" << endl;
            cout << "Enter The Any One Language = ";
            cin >> slct;

            switch(slct)
            {
                jump:
                case 1:
                {
                    cout << "NICE CHOICE PYTHON LANGUAGE" << endl;
                    cout << "PYTHON FEE = 430" << endl << endl;
                    Fee = 430;
                }
                break;

                case 2:
                {
                    cout << "NICE CHOICE JAVA LANGUAGE" << endl;
                    cout << "JAVA FEE = 450" << endl << endl;
                    Fee = 450;
                }
                break;

                case 3:
                {
                    cout << "NICE CHOICE JAVA SCRIPT LANGUAGE" << endl;
                    cout << "JAVA SCRIPT FEE = 450" << endl << endl;
                    Fee = 450;
                }
                break;

                case 4:
                {
                    cout << "NICE CHOICE PHP LANGUAGE" << endl;
                    cout << "PHP FEE = 420" << endl << endl;
                    Fee = 420;
                }
                break;

                default:
                {
                    cout << "Please Enter valid Number---!";
                    goto jump;
                }
            }
        }
    }
};
class intership4 : public intership3
{
    public:

    void day45()
    {
        if(Day==3)
        {
            cout << endl << "\t" << "Select The Cource"<< endl << endl;

            cout << "[1] C#" << endl;
            cout << "[2] SWIFT" << endl;
            cout << "[3] JAVA SCRIPT" << endl;
            cout << "[4] KOTLIN" << endl;
            cout << "Enter The Any One Language = ";
            cin >> slct;

            switch(slct)
            {
                jump:
                case 1:
                {
                    cout << "NICE CHOICE C# LANGUAGE" << endl;
                    cout << "C# FEE = 550" << endl << endl;
                    Fee = 430;
                }
                break;

                case 2:
                {
                    cout << "NICE CHOICE SWIFT LANGUAGE" << endl;
                    cout << "SWIFT FEE = 530" << endl << endl;
                    Fee = 450;
                }
                break;

                case 3:
                {
                    cout << "NICE CHOICE JAVA SCRIPT LANGUAGE" << endl;
                    cout << "JAVA SCRIPT FEE = 600" << endl << endl;
                    Fee = 600;
                }
                break;

                case 4:
                {
                    cout << "NICE CHOICE KOTLIN LANGUAGE" << endl;
                    cout << "KOTLIN FEE = 480" << endl << endl;
                    Fee = 480;
                }
                break;

                default:
                {
                    cout << "Please Enter valid Number---!";
                    goto jump;
                }
            }
        }
    }
};
class intership5 : public intership4
{
    public:

    void day60()
    {
        if(Day==4)
        {
            cout << endl << "\t" << "Making Project Select Best language"<< endl << endl;

            cout << "[1] C / C++" << endl;
            cout << "[2] HTML / CSS" << endl;
            cout << "[3] PYTHON / JAVA SCRIPT" << endl;
            cout << "[4] HTML / PPP / CSS / SQl" << endl;
            cout << "[5] HTML / CSS / SQl" << endl;
            cout << "[6] HTML / CSS / JAVA SCRIPT" << endl;
            cout << "Enter The Any One Language = ";
            cin >> slct;

            switch(slct)
            {
                jump:
                case 1:
                {
                    cout << "PROJECT WITH C/C++" << endl;
                    cout << "C / C++ PROJECT FEE = 800" << endl << endl; 
                    Fee = 800;
                }
                break;

                case 2:
                {
                    cout << "PROJECT WITH HTML / CSS" << endl;
                    cout << "HTML / CSS PROJECT FEE = 760" << endl << endl; 
                    Fee = 760;
                }
                break;

                case 3:
                {
                    cout << "PROJECT WITH PYTHON / JAVA SCRIPT" << endl;
                    cout << "PYTHON / JAVA SCRIPT PROJECT FEE = 880" << endl << endl; 
                    Fee = 880;
                }
                break;

                case 4:
                {
                    cout << "PROJECT WITH HTML / PPP / CSS / SQl" << endl;
                    cout << "HTML / PPP / CSS / SQl PROJECT FEE = 870" << endl << endl; 
                    Fee = 870;
                }
                break;

                case 5:
                {
                    cout << "PROJECT WITH HTML / CSS / SQl" << endl;
                    cout << "HTML / CSS / SQl PROJECT FEE = 850" << endl << endl; 
                    Fee = 850;
                }
                break;

                case 6:
                {
                    cout << "PROJECT WITH  HTML / CSS / JAVA SCRIPT" << endl;
                    cout << " HTML / CSS / JAVA SCRIPT PROJECT FEE = 900" << endl << endl; 
                    Fee = 900;
                }
                break;

                default:
                {
                    cout << "Please Enter valid Number---!";
                    goto jump;
                }
            }
        }
    }
};
class intership6 : public intership5
{
    public:

    void payment1()
    {
        jump:
        cout << ":: HWhy Would You Pay ::" << endl;
        cout << "[110] online Pay " << endl;
        cout << "[220] case pay " << endl;
        cout << "Select Your Paymnet Number = ";
        cin >> pay;

        switch(pay)
        {
            case 110:
            {
                cout << "::-:: online Pay ::-::" << endl;
                cout << " Select payment " << endl << " Paytm [11]" << "\t" << "   Phone Pay [22]" << "\t" << " Google pay [33]" << endl;
                cout << "Select Your Application Use Paymnet : ";
                cin >> OnOf;

                if(OnOf==11)
                {
                    cout << "\t" <<" Paytm " << endl;
                    cout << "Payment Price = " << Fee << endl;
                    cout << "confirm payment (Y/ N): ";
                    cin >> pmt;
                    if(pmt=='Y','y')
                    {
                       cout << "Confirm Payment Done " << endl;
                    }
                    else{
                        goto jump;
                    }
                }
                else if(OnOf==22)
                {
                    cout << "\t" <<" Phone Pay " << endl;
                    cout << "Payment Price = " << Fee << endl;
                    cout << "confirm payment (Y/ N): ";
                    cin >> pmt;
                    if(pmt=='Y','y')
                    {
                        cout << "Confirm Payment Done " << endl;
                    }
                    else
                    {
                        goto jump;
                    }
                }
                else if(OnOf==33)
                {
                    cout << "\t" <<" Google Pay " << endl;
                    cout << "Payment Price = " << Fee << endl;
                    cout << "confirm payment (Y/ N): ";
                    cin >> pmt;
                    if(pmt=='Y','y')
                    {
                       cout << "Confirm Payment Done " << endl;
                    }
                    else{
                        goto jump;
                    }
                }
                else{
                    goto jump;
                }
            }
            break;

            case 220:
            {
                cout << "::-:: Offline Pay ::-::" << endl;
                cout << "Payment Price = " << Fee << endl;
                cout << "confirm payment (Y/ N): ";
                cin >> pmt;
                if(pmt=='Y','y')
                {
                    cout << "Confirm Payment Done " << endl;
                }
                else{
                    goto jump;
                }
            }
            break;

            default:
            {
                cout << "Please Enter Valid Number " << endl;
            }
        }
    }
};
class certificate : public intership6
{
    public:

    void print_certificate()
    {
        cout << endl << endl << endl << "\t" << "CERTIFICATE OF INTERSHIP" << endl << endl << endl;
        cout << "The certificate Certifies That" << endl;
        cout << "\t" << name << endl;
        cout << "________________________________________________________" << endl;
        cout <<  "For Her / Him outstanding completion of the compulsory intership " << endl;
        cout << "     Program at T.E.M Construction co-operative from july to " << endl;
        cout << "                   december 2023" << endl;

        cout << endl << "Date =" << Day << "\t""\t" << "SIGNATURE = {D33P-XT]" ;
    }
}INIT;
int main()
{
    INIT.gain();
    INIT.day15();
    INIT.day30();
    INIT.day45();
    INIT.day60();
    INIT.payment1();
    INIT.print_certificate();
}
