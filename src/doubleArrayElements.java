import java.util.ArrayList;

public class array {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Integer> arr = new ArrayList<Integer>();
		arr.add(2);
		arr.add(9);
		arr.add(7);
		arr.add(23);
		arr.add(5);
		ArrayList<Integer> doubleArr = doubleArray(arr);
		for(int i=0; i<arr.size(); i++) {
			System.out.println(doubleArr.get(i));
		}

	}

	public static ArrayList<Integer> doubleArray(ArrayList<Integer> arr) {
		ArrayList<Integer> res = new ArrayList<Integer>();
		for(int i=0; i<arr.size(); i++) {
			res.add(arr.get(i)*2);
		}
		return res;
	}
}
