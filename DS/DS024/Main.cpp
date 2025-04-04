#include <iostream>
#include <sstream>
#include <fstream>
#define MAX 50

using namespace std;
string kname[2] = {"A+~F", "P/F"}; // String for grading

class MyClass{
private:
	int code;		    // class code
	string name; 	// class name
	int unit;		    // credites
	int grading;	    // grading category (1:A+~F, 2:P/F)
public:
    MyClass(int ncode, string nname, int nunit, int ngrading){
        code = ncode; name = nname; unit = nunit; grading = ngrading;
    }
    int getCode(){return code;}
    string getName(){return name;}
    int getUnit(){return unit;}
    int getGrading(){return grading;};
    void setCode(int newcode){code = newcode;}
    void setName(string newname){name = newname;}
    void setUnit(int newunit){unit = newunit;}
    void setGrading(int newgrading){grading = newgrading;}
    string toString(){
        stringstream sstm;
        sstm <<  "[" << code << "] " << name << " [credit " << unit << " - "+kname[grading-1] << "]";
        return sstm.str();
    }
    string toStringSave(){
        stringstream sstm;
        sstm << code << " " << name << " " << unit << " " << grading;
        return sstm.str();
    }
};

class MyClassManager{
private:
    MyClass* allclasses[MAX];
    MyClass* myclasses[10];
    int count;
    int mycount;
public:
    MyClassManager(){
        count=0; mycount=0;
    }
    int getCount(){return count;}
    int getMyCount(){return mycount;}

    void loadData(string filename);
    void printAllClasses(); // Print all class list
    void findClasses(string name); // Search a class by name from the list
    void saveAllClasses(string filename); // Save all class list

    // Functions for modifying
    void addClass(); // Add a class into the list
    void editClass(); // Modify a class in the list

    // Functions for making
    void applyMyClass(); // Apply a class
    void printMyClasses(); // Print my classes
    void saveMyClasses(string filename); // Save my classes
};


int main() {
	int no;	// menu number 
    int quit = 0;
	string name;

	MyClassManager manager; // MyClassManager obj

	manager.loadData("classes.txt");

	while(!quit){
		cout << "Menu 1.List 2.Add 3.Modify 4.Search 5.Apply 6.My classes 7.Save 0.Quit\n";
		cout << ">> Menu? > ";
		cin >> no;
        switch(no){
            case 1: 
			    cout << "> 1.Print All Classes\n";
	    		manager.printAllClasses();
                break;
            case 2:
			    cout << "> 2.Add a Class\n";
    			manager.addClass();
                break;
		    case 3:
    			cout << "> 3.Modify a Class\n";
	    		manager.editClass();
                break;
            case 4:
            	cout << "> 4.Search a Class\n";
			    cout << ">> Enter class name > ";
			    cin >> name;
    			manager.findClasses(name);
                break;
		    case 5:
    			cout << "> 5.Apply a class\n";
	    		manager.applyMyClass();
		    	cout << manager.getMyCount() << " classes has been applied.\n";
                break;
    		case 6:
    			cout << "> 6.My classes\n";
	    		manager.printMyClasses();
                break;
    		case 7:
    			cout << "> 7.Save\n";
	    		manager.saveMyClasses("myclasses.txt");
		    	cout << "\n> All my classes ware saved to my_classes.txt.\n";
			    manager.saveAllClasses("classes.txt");
			    cout << "\n> All of class list ware saved to classes.txt.\n";
                break;
            case 0:
                quit = 1;
                break;
		}
	}
	return 0;
}

void MyClassManager::loadData(string filename){
    string line, name;
    int code, unit, grading;
	ifstream file(filename);
	while(!file.eof()){
        if(file.eof()) break;
		file >> code >> name >> unit >> grading;
        allclasses[count] = new MyClass(code, name, unit, grading);
		count++;
	}
	file.close();
    cout << count << " classes are loaded.\n";
}

void MyClassManager::printAllClasses(){

    
    
	for (int i=0; i<count; i++){
		cout << allclasses[i]->toString() << endl;
	}
}

void MyClassManager::saveAllClasses(string filename){
	ofstream file(filename);
	for(int i=0; i<count; i++){
		file << allclasses[i]->toStringSave();
        if(i<count-1) file << endl;
	}
	file.close();	
}

void MyClassManager::findClasses(string name){
	int found = 0;
	cout << "Searching keyword: " << name << endl;
	for(int i=0; i<count; i++){
		if(allclasses[i]->getName().find(name) != string::npos){
		    cout << allclasses[i]->toString() << endl;
			found++;
		}
	}
	cout << count << " classes found.\n";
}

// You must complete these functions.
void MyClassManager::addClass(){
// Caution : Don't allow the duplicate class code.
// You must complete this function.
    string name;
    int code, unit, grading;

    while(true){
        bool out = false;

        cout << ">> code number > ";
        cin >> code;
        for(int i=0; i<count; i++){
            if(allclasses[i]->getCode() == code){
                cout << "Code duplicated! Retry." <<endl;

                out = true;
                break;
            }
        }
        if(!out) break;
    }

	cout << ">> class name > ";
	cin >> name;
	cout << ">> credits > ";
	cin >> unit;
	cout << ">> grading (1: A+~F, 2: P/F) > ";
	cin >> grading;

	// You must complete this section.

    allclasses[count] = new MyClass(code, name, unit, grading);
	count++;
}

void MyClassManager::editClass(){
	int code;


    while (true) {
        cout << ">> Enter a code of class > ";
        cin >> code;
        int newcode = 1;
        int j;
        for(int i=0; i<count; i++){
            if(allclasses[i]->getCode() == code){
                newcode = 0; //중복되면
                j=i;
                break;
            }
        }
        if(newcode == 0){
            string name;
            int unit, grading;
            cout << "Current: "<<allclasses[j]->toString() << endl;

            cout << ">> Enter new class name > ";
            cin >> name;
            cout << ">> Enter new credits > ";
            cin >> unit;
            cout << ">> Enter new grading (1: A+~F, 2: P/F) > ";
            cin >> grading;
            delete allclasses[j];
            allclasses[j] = new MyClass(code, name, unit, grading);
            cout <<"> Modified."<<endl<<endl;
            return;
        }else{
            cout << "No such class." << endl;
        }
    }

}



void MyClassManager::applyMyClass(){

// You must make all these functions.
	int code =0;
    int rucount=0;
	// You must complete this section.

    while (true) {
        cout << ">> Enter a code of class > ";
        cin >> code;
        int newcode = 1;
        int j;
        for(int i=0; i<count; i++){
            if(allclasses[i]->getCode() == code){
                newcode = 0; //중복되면
                j=i;
                break;
            }
        }
        if(newcode == 0){
            cout << allclasses[j]->toString() << endl;
            cout << "Add more?(1:Yes 2:No) > ";
            int num;
            cin >> num;
            switch (num) {
                case 1:
                    myclasses[mycount] = allclasses[j];
                    mycount++;
                    rucount++;
                    break;

                case 2:
                    myclasses[mycount] = allclasses[j];
                    mycount++;
                    rucount++;
                    return;
                default:
                    break;

            }

        }else{
            cout << "No such code of class." << endl;
        }
    }
    cout << rucount <<" classes has been applied"<<endl<<endl;



	
}

void MyClassManager::printMyClasses(){

    int totalcredits=0;

// You must make all these functions.
	for (int i=0; i<mycount; i++){
		cout << i+1<<". "<<myclasses[i]->toString() << endl;
        totalcredits += myclasses[i]->getUnit();
	}
    cout << "All : " <<totalcredits << " credits" <<endl << endl;


}

void MyClassManager::saveMyClasses(string filename){

// You must make all these functions.
    int totalcredits=0;    int AF=0,PF=0;

    ofstream file(filename);
	
        for (int i=0; i<mycount; i++){
            file << i+1 <<". "<<myclasses[i]->toString() << endl;
            
            if(myclasses[i]->getGrading() == 1) AF += myclasses[i]->getUnit();
            else PF += myclasses[i]->getUnit();
        }
    file << "All : " <<totalcredits << ", credits";
    file << " (A+~F " << AF << " credits,"<< " P/F " << PF << " credits)";

        

	file.close();

	
}