//Write the function code that returns the product of hours and hourly_rate.\
#include "decision.h"


//THIS IS ANOTHER WAY TO CALC gross_pay
/*double gross_pay(double hours, double hourly_rate)
{
	if (hours > 40)
	{
		int OT = hours - 40;
		return((hours - OT) * hourly_rate) + (hourly_rate * 1.5 * OT);
	}
	else
	{
		return hours * hourly_rate;
	}
}
*/
double gross_pay(double hours, double hourly_rate)
{
	double pay;
	if (hours <= 40)
	{
		pay = hours * hourly_rate;
	}
	else
	{
		pay = 40 * hourly_rate;
		double ot_hours = hours - 40;
		pay = pay + (ot_hours * 1.5 * hourly_rate);
	}
	return pay;
}