#include <iostream>
#include <chrono>

int main(){
	bool timing = false;

	// timing
	if(timing){
	    using std::chrono::high_resolution_clock;
	    using std::chrono::duration_cast;
	    using std::chrono::duration;
	    using std::chrono::milliseconds;

	    auto t1 = high_resolution_clock::now();
	}


    // program
	int n = 0;

	std::cin >> n;
	int sum = 0;
	int temp = 0;
	for(int i = 0; i < n; i++){
		std::cin >> temp;
		sum += temp;
	}
	printf("%d", sum);


	// timing
	if(timing){
		auto t2 = high_resolution_clock::now();

		/* Getting number of milliseconds as an integer. */
	    auto ms_int = duration_cast<milliseconds>(t2 - t1);

	    /* Getting number of milliseconds as a double. */
	    duration<double, std::milli> ms_double = t2 - t1;

	    std::cout << ms_int.count() << "ms\n";
	    std::cout << ms_double.count() << "ms\n";
	}


	return 0;
}