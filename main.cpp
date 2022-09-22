#include <iostream>

int main()
{
	int num = 200;

	for (float leg1 = 0; leg1 < 200; leg1++)
	{
		for (float leg2 = 0; leg2 < 200; leg2++)
		{
			for (float hypotenuse = 0; hypotenuse < 200; hypotenuse++)
			{
				if (!(leg1 == leg2 || leg2 == hypotenuse || leg1 == hypotenuse))
				{
					if ((leg1^2) + (leg2^2) = hypotenuse^2)
					{
						std::cout << leg1 << " " << leg2 << " " hypotenuse << "\n";
					}
				}
			}
		}
	}
	

	return 0;
}
