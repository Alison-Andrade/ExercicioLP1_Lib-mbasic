#ifndef _MATH_BASIC_H_
#define _MATH_BASIC_H_

namespace mbasic{

	class MathBasic{
	
	public:
		MathBasic();
		~MathBasic();

		static int Add(int v1, int v2);
		static int Dif(int v1, int v2);
		static int Mux(int v1, int v2);
		static int Div(int v1, int v2);
		
	};

}

#endif