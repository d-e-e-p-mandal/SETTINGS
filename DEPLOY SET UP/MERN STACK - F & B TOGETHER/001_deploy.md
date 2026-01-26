Step 1 : Remove all console.log() // best practice
Step 2 : backend file ->.env, gitignore, package.json, package.lock.json -> root folder


```js
improt path from "path";

const _dirname = path.resolve();

app.use(express.static(path.join(_drname,"/ffontend/dist"))); // frontend

app.get('*', (req, res)=>{
    res.sendFile(path.resolve(_dirname, "frontend", "dist", "index.html"));
})'
```
```js
import path from "path";
import express from "express";
import { fileURLToPath } from "url";

const app = express();

// ES module dirname fix
const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

// Serve frontend
app.use(
  express.static(path.join(__dirname, "../frontend/dist"))
);

// SPA fallback
app.get("*", (req, res) => {
  res.sendFile(
    path.join(__dirname, "../frontend/dist/index.html")
  );
});

export default app;
```
