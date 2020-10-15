#include<iostream>
using namespace std;

class Demo
{
	int n1,n2,n3;
	public:
		int result;
		int sum(int n1,int n2)
		{
			result=n1+n2;
			return result;
			
		}
		
			float sum(int n1,float n2)
			{
				result=n1+n2;
				return result;
			}
			
			//	double sum(int n1,int n2,float n3)
			//	{
			//		result=n1+n2+n3;
			//		return result;
			//	}
};

			int main()
			{
				Demo d1,d2,d3;
				d1.sum(12,12);
				d2.sum(12,22.45);
			//	d3.sum(10,20,30.50);
				return 0;
			}
