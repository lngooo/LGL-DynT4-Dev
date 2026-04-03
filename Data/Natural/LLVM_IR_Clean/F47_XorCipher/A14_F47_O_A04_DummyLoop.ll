define dso_local void @XorCipher(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %12
12:
  %13 = load i8*, i8** %3
  %14 = load i32, i32* %5
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds i8, i8* %13, i64 %15
  %17 = load i8, i8* %16
  %18 = icmp ne i8 %17, 0
  br i1 %18, label %19, label %22
19:
  %20 = load i32, i32* %5
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %5
  br label %12
22:
  br label %23
23:
  %24 = load i8*, i8** %4
  %25 = load i32, i32* %6
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = icmp ne i8 %28, 0
  br i1 %29, label %30, label %33
30:
  %31 = load i32, i32* %6
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %6
  br label %23
33:
  store i32 0, i32* %7
  br label %35
35:
  %36 = load i32, i32* %7
  %37 = load i32, i32* %5
  %38 = icmp slt i32 %36, %37
  br i1 %38, label %41, label %39
39:
  store i32 6, i32* %8
  br label %72
41:
  store i32 0, i32* %9
  br label %43
43:
  %44 = load i32, i32* %9
  %45 = icmp slt i32 %44, 1
  br i1 %45, label %48, label %46
46:
  store i32 9, i32* %8
  br label %68
48:
  %49 = load i8*, i8** %4
  %50 = load i32, i32* %7
  %51 = load i32, i32* %6
  %52 = srem i32 %50, %51
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i8, i8* %49, i64 %53
  %55 = load i8, i8* %54
  %56 = sext i8 %55 to i32
  %57 = load i8*, i8** %3
  %58 = load i32, i32* %7
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i8, i8* %57, i64 %59
  %61 = load i8, i8* %60
  %62 = sext i8 %61 to i32
  %63 = xor i32 %62, %56
  %64 = trunc i32 %63 to i8
  store i8 %64, i8* %60
  br label %65
65:
  %66 = load i32, i32* %9
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %9
  br label %43
68:
  br label %69
69:
  %70 = load i32, i32* %7
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %7
  br label %35
72:
  ret void
}
