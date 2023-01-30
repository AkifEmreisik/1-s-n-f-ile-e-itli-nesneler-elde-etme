#include<iostream>

class Mesaj{
	public:
		std::string yazi;
	void yaz(){
		std::cout<<yazi<<std::endl;
	}
};

int main(){
	
	Mesaj msg;
	msg.yazi="Deneme 1";
	msg.yaz();
	
	Mesaj msg2;
	msg2.yazi="Test 2";
	msg2.yaz();
	return 0;
	
}
