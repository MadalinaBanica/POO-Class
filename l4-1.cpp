  #include<iostream>
   using namespace std;
   class FORCE
   {
   double mass;
   double acceleration;
   public:
   FORCE(double m, double a);
   FORCE( const FORCE &f);
   ~FORCE();
   double Mass(void) { return mass;}
   };
   FORCE::FORCE(double m, double a)
   {
   mass=m;
   acceleration=a;
   cout<<"Passing through the constructor with arguments \n";
   }
    FORCE::FORCE(const FORCE &g)
    {
    mass=g.mass;
    acceleration=g.acceleration;
    cout<<"Passing through copy constructor \n";
    }
    FORCE::~FORCE()
    {
    cout<<"Passing through destructor \n";
    }
    void idle1()
    {
    cout<<"Entering function idle ONE \n\n";
    }
    FORCE idle2(FORCE &f)
    {
    cout<<"Entering function idle TWO \n\n";
    return f;
    }
    FORCE idle3(FORCE f)
    {
    cout<<"Entering function idle THREE \n\n";
    return f;
    }
    int main()
    {
    cout << " f1" <<endl;
    	FORCE f1(0,0);
   cout << " f2" <<endl;
    	FORCE f2(4.3,9.9);
    f1=FORCE(f2);
    cout << "calling idle1" <<endl;
    idle1();
    cout << "f3" <<endl;
    	FORCE f3(7.5,9.8);
    cout << "f4" <<endl;
    	FORCE f4(0,0);
    cout << "f4 <- copy <- f3" <<endl;
     f4=FORCE(f3);
    cout << "calling idle2" <<endl;
    FORCE f5 = idle2(f4); 
     FORCE f6 = idle3(f4); 
    cout << "The mass of the final force (#6): " << f6.Mass() << endl;
    return 0;
    }
