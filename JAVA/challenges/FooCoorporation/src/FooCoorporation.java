
public class FooCoorporation {
	
	public static void payCalculator(double basePay, double hoursWorked) {
		
		double pay = 0;
		double minWage = 7.25;
		double overtimeMultiplier = 1.5;
		double hoursTillOvertime = 40;
		double maxHoursPerWeek = 60;
		
		if (basePay < minWage) {
			basePay = minWage;
		}
		
		if (hoursWorked <= hoursTillOvertime) {
			pay = basePay * hoursWorked;
			System.out.println(pay);
		}
		
		else if (hoursWorked > maxHoursPerWeek) {
			System.out.println("Exceeded max work hours of " + maxHoursPerWeek + " in a week");
		}
		
		else {
			pay = basePay * hoursTillOvertime;
			pay += basePay * (hoursWorked - hoursTillOvertime) * overtimeMultiplier;
			System.out.println(pay);
		}
	}
	
	public static void main(String[] arguments) {
		// Employee 1
		payCalculator(7.00, 35);
		
		// Employee 2
		payCalculator(8.20, 47);
		
		// Employee 3
		payCalculator(10.00, 73);
	}
	
}
