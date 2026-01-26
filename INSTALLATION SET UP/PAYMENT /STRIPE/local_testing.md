✔️ This means Xcode is installed and active
✔️ Homebrew will use Xcode’s developer tools instead of CLT
✔️ /Library/Developer/CommandLineTools is not required anymore

```bash
xcode-select -p
/Applications/Xcode.app/Contents/Developer
```


Accept Xcode license (mandatory)
```bash
sudo xcodebuild -license accept
```


✅ Now install Stripe CLI 
```bash
brew install stripe/stripe-cli/stripe
```

Then verify:
```bash
stripe --version
```


stripe login
```bash
stripe login
```

Start webhook listener (THIS IS THE KEY STEP)
```bash
stripe listen --forward-to localhost:8080/api/v1/stripe/webhook
```


You will see output like:
```bash
Ready! Your webhook signing secret is whsec_1234567890abcdef
```


✅ Put it in .env (backend)
```.env
STRIPE_SECRET_KEY=sk_test_xxxxxxxxx
STRIPE_WEBHOOK_SECRET=whsec_1234567890abcdef
```

## Online Test : 
1. Test mode on 
2. env variable key same as before