define dso_local void @XorCipher(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i8
  %8 = alloca i8
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i8*, i8** %4
  %12 = load i32, i32* %5
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %17, label %20
17:
  %18 = load i32, i32* %5
  %19 = add nsw i32 %18, 1
  store i32 %19, i32* %5
  br label %10
20:
  store i32 0, i32* %6
  br label %22
22:
  %23 = load i8*, i8** %3
  %24 = load i32, i32* %6
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = icmp ne i8 %27, 0
  br i1 %28, label %29, label %61
29:
  %30 = load i8*, i8** %3
  %31 = load i32, i32* %6
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  %34 = load i8, i8* %33
  store i8 %34, i8* %7
  %35 = load i8*, i8** %4
  %36 = load i32, i32* %6
  %37 = load i32, i32* %5
  %38 = srem i32 %36, %37
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %35, i64 %39
  %41 = load i8, i8* %40
  store i8 %41, i8* %8
  %42 = load i8, i8* %7
  %43 = zext i8 %42 to i32
  %44 = load i8, i8* %8
  %45 = zext i8 %44 to i32
  %46 = add nsw i32 %43, %45
  %47 = load i8, i8* %7
  %48 = zext i8 %47 to i32
  %49 = load i8, i8* %8
  %50 = zext i8 %49 to i32
  %51 = and i32 %48, %50
  %52 = mul nsw i32 2, %51
  %53 = sub nsw i32 %46, %52
  %54 = trunc i32 %53 to i8
  %55 = load i8*, i8** %3
  %56 = load i32, i32* %6
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i8, i8* %55, i64 %57
  store i8 %54, i8* %58
  %59 = load i32, i32* %6
  %60 = add nsw i32 %59, 1
  store i32 %60, i32* %6
  br label %22
61:
  ret void
}
