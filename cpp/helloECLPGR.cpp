#include<iostream>
using namespace std;

class initialP{
	private:
		int sampleValue;
	public:
		initialP():sampleValue(0){
			cout<<"[Message "<<sampleValue<<"]"<<"Hello world!"<<endl;
		}
};

int main(){
	initialP eclapy;
}
