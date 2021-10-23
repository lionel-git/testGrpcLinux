#include <iostream>

#include <grpcpp/grpcpp.h>

static std::shared_ptr<grpc::Channel> G_channel;

extern "C" {
void do_work(int value)
{
	std::cout << "Start do_work() " << value << std::endl;

	grpc::ChannelArguments args;
	// Will lock on destructor at prg exit!
	G_channel = grpc::CreateCustomChannel("localhost:4444", grpc::InsecureChannelCredentials(), args);
	//

	std::cout << "End do_work()" << std::endl;
}
}
