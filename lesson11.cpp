#include <iostream>
using namespace std;
#include <iostream>
#include <string>
#include <vector>

//class Worker
//{
//private:
//    string m_name;
//
//public:
//    Worker(string name)
//        : m_name(name)
//    {
//    }
//
//    string getName() { return m_name; }
//};
//
//class Department
//{
//private:
//    Worker* m_worker; // щоб було простіше, в цьому Відділі працює тільки один Працівник, але їх може бути і кілька
//    vector<Worker*> workers;
//
//public:
//    Department(Worker* worker = nullptr)
//        : m_worker(worker)
//    {
//    }
//    void add(Worker* worker) {
//        workers.push_back(worker);
//    }
//    friend ostream& operator<<(ostream& output,  const Department& workers) {
//        for (short i = 0; i < workers.workers.size(); i++) {
//            output << workers.workers[i]->getName() << " ";
//        }
//        return output;
//    }
//};
//
//int main()
//{
//    // Створюємо Працівників поза областю видимості класу Department
//    Worker* w1 = new Worker("Anton");
//    Worker* w2 = new Worker("Ivan");
//    Worker* w3 = new Worker("Max");
//
//    {
//        // Створюємо Відділ і передаємо Працівників в якості параметрів конструктора
//        Department department; // створюємо пустий Відділ
//        department.add(w1);
//        department.add(w2);
//        department.add(w3);
//
//        cout << department;
//
//    } // department виходить з області видимості і знищується тут
//
//    cout << endl;
//    cout << w1->getName() << " still exists!\n";
//    cout << w2->getName() << " still exists!\n";
//   cout << w3->getName() << " still exists!\n";
//
//    delete w1;
//    delete w2;
//    delete w3;
//
//    return 0;
//}
//class Animal {
//public:
//	int age;
//	string color;
//	string name;
//	Animal() :age{ 0 }, color{ nullptr }, name{ nullptr } {
//	}
//	Animal(int ag, string colo, string nam) :age{ ag }, color{ colo }, name{ nam } {
//	}
//};
//class Cat :public Animal {
//	string poroda;
//	string TypeMau;
//public:
//	Cat(int ag, string colo, string nam, string porod,string mau) :Animal(ag, colo, nam), poroda(porod),TypeMau(mau) {
//		cout<<"Cat\n" << "Name: " << name << "\nAge: " << age << "\nPoroda: " << poroda << "\nColor: " << color<< "\nType mau: " << TypeMau;
//	}
//};
//class Dog :public Animal {
//	string poroda;
//	string TypeBark;
//public:
//	Dog(int ag, string colo, string nam, string porod,string bark) :Animal(ag, colo, nam), poroda(porod), TypeBark(bark){
//		cout << "Dog\n" << "Name: " << name << "\nAge: " << age << "\nPoroda: " << poroda << "\nColor: " << color<< "\nType bark: " << TypeBark;
//	}
//};
//class Parrot :public Animal {
//	bool canTalk;
//public:
//	Parrot(int ag, string colo, string nam, bool talk) :Animal(ag, colo, nam), canTalk(talk) {
//		cout << "Parrot\n" << "Name: " << name << "\nAge: " << age <<  "\nColor: " << color;
//		(talk == true) ? cout << "\nCan talk: True" : cout << "\nCan talk: False";
//	}
//};
//int main(){
//	Cat cat{7,"Black","Lila","Sphinks","Mrrrrrr"};
//	cout << endl<< endl;
//	Dog dog{ 3,"Brown","Billy","Buldog","Grrrr"};
//	cout << endl<<endl;
//	Parrot parrot{ 5,"Green","Karry", true};
//}
//class Passport {
//	string name;
//	string last_name;
//	string middle_name;
//	string data;
//	string end;
//	char stat;
//	string gromad;
//	int number;
//public:
//	Passport(string nam, string last, string middle, string data,string kinec, char mf, string nation, int num)
//		:name(nam), last_name(last), middle_name(middle), data(data),end(kinec), stat(mf), gromad(nation),number(num){}
//	void display() {
//		cout << "Last Name: " << last_name << "\nName: " << name << "\nMiddle name: " << middle_name <<
//			"\nGender: " << stat << "\nData: " << data<<"\nPasport's end: "<< end << "\nNation: " << gromad
//			<<"\nPassport's number: "<<number << endl;
//	}
//};
//class Zagran_Passport :protected Passport {
//	string type_visa;
//	int numberpas;
//public:
//	Zagran_Passport(string nam, string last, string middle, string data, string kinec, char mf, string nation, int num,string type,int number)
//		:Passport(nam, last, middle,data,kinec,mf,nation,num), type_visa(type),numberpas(number){}
//	void display() {
//		Passport::display();
//		cout << "Visa's type: " << type_visa << "\nZagran passport's number: " << numberpas <<endl;
//	}
//	
//};
//int main() {
//	Passport passport("Kate","Tree","Jacline","12.09.1995","23.08.2026",'F',"American",247950371);
//	cout << "Passport\n";
//	passport.display();
//	Zagran_Passport Zagran("Boyd", "Dandelion", "Bob", "19.02.2000", "27.05.2028", 'M', "Mexican", 247950371,"Tourist",370178471);
//	cout <<endl<< "Zagran Passport\n";
//	Zagran.display();
//}
class Home_Animal {
protected:
	string name;
public:
	Home_Animal(string nam):name(nam){}
	virtual void Sound() { cout << "???"<<endl; }
	virtual void Show() { cout << name  << endl; }
	virtual void Type(){ cout << "???" << endl; }
	virtual void Osoblivosti() { cout << "???" << endl; }
};
class Dog :public Home_Animal {
	int kil_commands;
	string type;
	string sound;
public:
	Dog(string nam, string typ, string sou,int comm) :Home_Animal(nam),type(typ),sound(sou), kil_commands(comm){}
	void Sound() { cout << sound << endl; }
	void Show() { cout << name << endl; }
	void Type() { cout << type << endl; }
	void Osoblivosti() { cout << "Kilkist known commands: "<< kil_commands << endl; }
};
class Cat :public Home_Animal {
	int kil_lives;
	string type;
	string sound;
public:
	Cat(string nam, string typ, string sou,int lives) :Home_Animal(nam), type(typ), sound(sou), kil_lives(lives){}
	void Sound() { cout << sound << endl; }
	void Show() { cout << name << endl; }
	void Type() { cout << type << endl; }
	void Osoblivosti() { cout << "Kilkist lives: "<< kil_lives << endl; }
};
class Parrot :public Home_Animal {
	string  most_liked_phraze;
	string type;
	string sound;
public:
	Parrot(string nam, string typ, string sou,string phraze) :Home_Animal(nam), type(typ), sound(sou), most_liked_phraze(phraze){}
	void Sound() { cout << sound << endl; }
	void Show() { cout << name << endl; }
	void Type() { cout << type << endl; }
	void Osoblivosti() { cout << "Most liked phraze: "<< most_liked_phraze << endl; }
};
class Hamster :public Home_Animal {
	string  Alive_or_died;
	string type;
	string sound;
public:
	Hamster(string nam, string typ, string sou,string lod) :Home_Animal(nam), type(typ), sound(sou), Alive_or_died(lod){}
	void Sound() { cout << sound << endl; }
	void Show() { cout << name << endl; }
	void Type() { cout << type << endl; }
	void Osoblivosti() { cout << "Alive or Died: "<< Alive_or_died << endl; }
};
void Print(Home_Animal& animal) {
	animal.Show();
	animal.Sound();
	animal.Type();
	animal.Osoblivosti();
}
int main() {
	cout << "Cat: " << endl;
	Cat cat("Pushok","Sfinks","Maff",7);
	Print(cat);
	cout<<endl << "Dog: " << endl;
	Dog dog("Fear", "Buldog", "Grrr", 5);
	Print(dog);
	cout<<endl<<"Parrot: " << endl;
	Parrot parrot("Kesha", "Ara", "Kar", "Freedom for parrots!!!");
	Print(parrot);
	cout << endl << "Hamster: " << endl;
	Hamster hamster("Liver", "Dzungarskiy", "Scscsc", "Alive");
	Print(hamster);
}