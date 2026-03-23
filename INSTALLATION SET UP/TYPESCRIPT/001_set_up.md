## Install TypeScript :
```bash
npm install typescript
```

Global Install : 
```bash
npm install -g typescript
```

Here are the most important tsc (TypeScript Compiler) commands you should know 👇

⸻

🔹 Basic Compile Command

Compile a single file:
```bash
tsc file.ts
```
👉 Converts file.ts → file.js

⸻

🔹 Compile Multiple Files
```bash
tsc file1.ts file2.ts
```

⸻

🔹 Initialize TypeScript Config
```bash
tsc --init
```
👉 Creates tsconfig.json (project settings file)
custom exclude 
```json
{
  "compilerOptions": {
    "outDir": "./dist"
  },
  "exclude": ["node_modules", "dist"]
}
```
⸻

🔹 Watch Mode (Auto Compile)
```bash
tsc --watch
```
or short form:
```bash
tsc -w
```

⸻

🔹 Compile Entire Project

(when tsconfig.json exists)
```bash
tsc
```

⸻

🔹 Output Directory
```bash
tsc file.ts --outDir dist
```
👉 Output goes into dist/ folder

⸻

🔹 Compile to Specific JS Version
```bash
tsc file.ts --target ES6
```

⸻

🔹 Combine Files into One
```bash
tsc file1.ts file2.ts --outFile bundle.js
```

⸻

🔹 Enable Strict Mode
```bash
tsc --strict
```

⸻

🔹 Show Errors Only (No Output)
```bash
tsc --noEmit
```

⸻

🔹 Help Command
```bash
tsc --help
```

⸻

💡 Most Used Combo (Real Projects)

After setup:
```bash
tsc --init
tsc -w
```
👉 This is what developers use daily 🚀

⸻
