

⸻

✅ Correct & Clean Structure (Recommended)

lms
├── client
│   ├── package.json
│   └── node_modules
│
├── server
│   ├── package.json   ← backend dependencies here
│   ├── node_modules   ← backend-only modules
│   ├── index.js
│   ├── routes
│   └── controllers
│
├── .env
├── .gitignore
└── README.md


⸻
✅ Scripts Setup (ROOT)

Root package.json:
```json
{
  "scripts": {
    "dev:server": "nodemon server/index.js",
    "dev:client": "npm run dev --prefix client",
    "dev": "concurrently \"npm run dev:server\" \"npm run dev:client\"",
    "build": "npm install --prefix client && npm run build --prefix client",
    "start": "node server/index.js"
  }
}
```

⸻

✅ .gitignore (Important)

server/node_modules
client/node_modules
.env
⸻
