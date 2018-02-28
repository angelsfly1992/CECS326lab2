#define MSG_TYPE_ACK 1
#define MSG_TYPE_DATA 2
#define MSG_TYPE_TERM 1

using namespace std


struct buf {
	int mtype; //Type of Message Data/Ack/Terminate mesage
	int data;
); buf message_buf;

//current sender type
int sender_type=0;
	
//Signal handler to receive kill signal
void sig_handler(int);


//random 100 numbers value
int r = (rand()% 100+ 1;
cout << Random Value: " <<r<<endl;
