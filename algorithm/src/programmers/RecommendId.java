package programmers;

public class RecommendId {
	public String solution(String new_id) {
		String answer = "";

		if (new_id.isEmpty()) {
			answer = "aaa";
		} else {
			String tempId = new_id;
			String check = "";
			tempId = tempId.toLowerCase();

			for (int i = 0; i < tempId.length(); i++) {
				char a = tempId.charAt(i);

				if (a != '-' && a != '.' && a != '_') {
					if (!(a - '0' <= '9' - '0' && a - '0' >= '0' - '0')
							&& !(a - '0' >= 'a' - '0' && a - '0' <= 'z' - '0')) {
						check += a;
					}
				}
			}

			if (check.length() != 0) {
				for (int i = 0; i < check.length(); i++) {
					char a = check.charAt(i);
					tempId = tempId.replace(Character.toString(a), "");

				}
			}

			while (tempId.contains("..")) {
				tempId = tempId.replace("..", ".");
			}

			if (tempId.length() == 0) {
				tempId = "a";

				if (tempId.indexOf(".") == 0) {
					tempId = tempId.substring(1);
				}
			}
			if (tempId.length() == 0) {
				tempId = "a";
				if (tempId.charAt(tempId.length() - 1) == '.') {
					tempId = tempId.substring(0, tempId.length() - 1);
				}
			}
			if (tempId.length() == 0) {
				tempId = "a";
			}
			if (tempId.length() > 15) {
				tempId = tempId.substring(0, 15);

				if (tempId.charAt(tempId.length() - 1) == '.') {
					tempId = tempId.substring(0, tempId.length() - 1);
				}
			}

			if (tempId.length() < 3) {
				while (tempId.length() < 3) {
					tempId += tempId.charAt(tempId.length() - 1);
				}
			}

			answer = tempId;
		}
		return answer;
	}
}
