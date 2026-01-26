Step 1 : Remove all console.log() // best practice
Step 2 : backend file ->.env, gitignore, package.json, package.lock.json -> root folder

```
root
├── backend
│   ├── index.js
│   ├── routes
│   │   └── api.routes.js
│   ├── controllers
│   ├── models
│   └── config
│
├── frontend
│   ├── dist                ← production build (served by backend)
│   ├── src
│   ├── public
│   └── package.json
│
├── .env                    ← environment variables
├── .gitignore
├── package.json            ← ROOT scripts (dev / build / start)
├── package-lock.json
└── README.md
```

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


```json
{
  "scripts": {
    /* ================= DEV ================= */
    "dev:server": "nodemon server/index.js",
    "dev:client": "npm run dev --prefix client",
    "dev": "concurrently \"npm run dev:server\" \"npm run dev:client\"",

    /* ================= BUILD ================= */
    "build": "npm install --prefix client && npm run build --prefix client",

    /* ================= START ================= */
    "start": "node server/index.js"
  }
}
```


```.gitignore
# =========================
# Node / NPM
# =========================
node_modules/
frontend/node_modules/
backend/node_modules/

npm-debug.log*
yarn-debug.log*
yarn-error.log*
pnpm-debug.log*

# =========================
# Environment variables
# =========================
.env
.env.local
.env.production
.env.development

# =========================
# Build outputs
# =========================
# Backend build output (safe to ignore)
backend/dist/

# Frontend build output (DO NOT ignore – served by backend)
# frontend/dist

# =========================
# Logs
# =========================
logs/
*.log

# =========================
# OS files
# =========================
.DS_Store
**/.DS_Store
Thumbs.db

# =========================
# Editor / IDE
# =========================
.vscode/
.idea/
*.swp

# =========================
# Cache / Temp
# =========================
.cache/
.tmp/
.temp/

# =========================
# Coverage
# =========================
coverage/

# =========================
# PM2
# =========================
pids/
*.pid
*.seed

# =========================
# Docker
# =========================
docker-compose.override.yml

# =========================
# Misc
# =========================
*.tgz
*.gz
```