

✅ EASIEST WAY (Recommended): phpMyAdmin

Do this 👇
	1.	Open browser

http://localhost/phpmyadmin

	2.	Click Import (top menu)
	3.	Click Choose File
	4.	Select this file:

user-list-app/db/database.sql

	5.	Scroll down → click Go

✅ DONE
Database + table created.

⸻

🟢 That’s it. Seriously.

⸻

✅ Confirm it worked
	•	Left sidebar → you should see:

userlist
  └── users


⸻

❌ What NOT to do
	•	❌ Don’t click “Run” in VS Code (there is none)
	•	❌ Don’t open .sql in browser
	•	❌ Don’t double-click the file

⸻

⚡ Alternative (Terminal – only if you want)

From VS Code Terminal:

/Applications/XAMPP/bin/mysql -u root < db/database.sql

But 👆 phpMyAdmin import is safest for beginners.

⸻