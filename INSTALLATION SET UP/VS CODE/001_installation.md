# VS Code "code ." Setup in MacBook

## Step 1

Download VS Code:

https://code.visualstudio.com/

---

## Step 2

Install VS Code.

- Open downloaded file
- Drag Visual Studio Code into Applications folder

---

## Step 3

Open VS Code.

---

## Step 4

From top menu bar open:

```text
View → Command Palette
```

---

## Step 5

Search:

```text
Shell Command: Install 'code' command in PATH
```

- Click on it.
- Give Permisions to install.

---

## Step 6

Close terminal.

Open terminal again.

---

## Step 7

Run:

```bash
code .
```

VS Code will open current folder.

---

## Check Setup

```bash
code --version
```

If version appears then setup successful.

---

## Open Current Folder

```bash
code .
```

---

## Open Specific Folder

```bash
code MyProject
```

---

## Open File

```bash
code main.cpp
```

---

## If Still Not Working

Restart MacBook.

Then run again:

```bash
code .
```

---

## Alternative Method

Run manually in terminal:

```bash
sudo ln -s "/Applications/Visual Studio Code.app/Contents/Resources/app/bin/code" /usr/local/bin/code
```

Then test:

```bash
code .
```