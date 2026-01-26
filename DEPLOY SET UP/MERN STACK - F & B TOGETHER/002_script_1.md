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
 "scripts": {
    "dev": "nodemon backend/index.js",
    "build": "npm install && npm install --prefix frontend && npm run build --prefix frontend",
    "start": "nodemon backend/index.js"
  },

```

**Note :** `It run npm install command do not need run it seperetely`
