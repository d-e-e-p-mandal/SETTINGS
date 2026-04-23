
## 1. Download .NET SDK

👉 Go to official site:
	•	Microsoft .NET

Steps:
	1.	Open browser
	2.	Search: “.NET SDK download”
	3.	Choose Latest LTS version (Recommended)
	4.	Select macOS (Apple Silicon / Intel based on your Mac)
	5.	Download .pkg installer

⸻

⚙️ 2. Install .NET SDK
	1.	Open downloaded .pkg file
	2.	Click Continue → Install
	3.	Enter Mac password
	4.	Finish installation

✔️ That’s it — SDK is installed

⸻

✅ 3. Verify Installation

Open Terminal and run:
```bash
dotnet --version
```
👉 If installed correctly → you will see version like:
```
8.0.xxx
```

⸻

🧠 4. Check All Details
```bash
dotnet --info
```
This shows:
	•	SDK version
	•	Runtime version
	•	Installed paths

⸻

📁 5. Create First .NET Project (Hello World)
```bash
dotnet new console -n HelloApp
cd HelloApp
dotnet run
```
👉 Output:
```
Hello, World!
```

⸻
