simple server
{
	@display("i=device/wifilaptop;p=230,40");
	gates:
		input radioIn @directIn;
}
 
simple client
{
	@display("i=device/wifilaptop;p=230,40");
	gates:
		input radioIn @directIn;
} 
 
network Network
{
	@display("bgb=327,200");
	submodules:
		Server: server{
			@display("p=56,85");
		}
		Client: client{
			@display("p=246,88");
		}
}