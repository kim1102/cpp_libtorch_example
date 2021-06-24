#include <torch/script.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	auto model_path = "./my_model.pt";

	try {
		auto pt_model = torch::jit::load(model_path);
	}

	catch (int expn) {
		cerr << "error loading the module\n" << endl;
	}

	cout << "model load complete" << endl;
	//at::Tensor tensor = torch::rand({ 2,3 });

	return 0;
}