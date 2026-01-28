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
└── node_modules            ← backend-only modules
└── README.md
```



```json
{
  "name": "server",
  "version": "1.0.0",
  "type": "module",
  "scripts": {
    "dev": "nodemon server/index.js",
    "build": "npm install && npm --prefix client install && npm --prefix client run build",
    "start": "node server/index.js"
  },
  "dependencies": {
    "bcryptjs": "^2.4.3",
    "cloudinary": "^2.5.1",
    "cookie-parser": "^1.4.7",
    "cors": "^2.8.5",
    "dotenv": "^16.4.5",
    "express": "^4.21.1",
    "jsonwebtoken": "^9.0.2",
    "mongoose": "^8.8.0",
    "multer": "^1.4.5-lts.1",
    "stripe": "^17.3.1"
  }
}
```
Or 

```json
{
  "name": "ai-tour",
  "version": "1.0.0",
  "private": true,
  "type": "module",
  "scripts": {
    "dev": "concurrently \"npm run dev:backend\" \"npm run dev:frontend\"",
    "dev:backend": "nodemon backend/server.js",
    "dev:frontend": "npm run dev --prefix frontend",
    "build": "npm install && npm install --prefix frontend && npm run build --prefix frontend",
    "start": "node backend/server.js"
  },
  "dependencies": {
    "express": "^4.21.2",
    "cors": "^2.8.6",
    "dotenv": "^17.2.3",
    "@google/genai": "^1.38.0"
  },
  "devDependencies": {
    "nodemon": "^3.1.11",
    "concurrently": "^8.2.2"
  }
}
```


**Note :** `It run npm install command do not need run it seperetely`
