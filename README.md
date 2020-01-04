
# react-native-s-contact
React Native 选择手机联系人模块，同时支持ios和android，react native 0.60.0+   autolink。本模块由于[react-native-contacts-wrapper](https://github.com/LynxITDigital/react-native-contacts-wrapper)没有更新，从该模块的基础上修改而来。

## 安装

```js
npm install react-native-s-contact --save
```
或者

```js
yarn add react-native-s-contact
```

## 配置
如果你的react native >= 0.60.0，那么你不需要做多余的配置。

## Android:
android需要在AndroidManifest.xml中配置权限：

```js
<uses-permission android:name="android.permission.READ_CONTACTS" />
```

## ios:
ios需要在项目根目录下运行命令：
```js
cd ios && pod install
```

## 使用
注意：android没有开启联系人权限，则会提示权限错误。
```javascript
import Contact from 'react-native-s-contact';

Contact.getEmail()
 .then(email => {
   this.importingContactInfo = false;
   console.log('email is', email);
 })
 .catch(error => {
   this.importingContactInfo = false;
   console.log('ERROR CODE: ', error.code);
   console.log('ERROR MESSAGE: ', error.message);
 });
```
## 方法
|Method|Description  |
|--|--|
| getContact(): Promise | 选择联系人方法|
| getEmail(): Promise | 选择某个人的邮箱方法|
