define dso_local void @CaesarCipher(i8* %0, i32 %1) {
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i8
  %8 = alloca i8
  store i8* %0, i8** %3
  store i32 %1, i32* %4
  %10 = load i32, i32* %4
  %11 = srem i32 %10, 26
  %12 = add nsw i32 %11, 26
  %13 = srem i32 %12, 26
  store i32 %13, i32* %5
  store i32 0, i32* %6
  br label %15
15:
  %16 = load i8*, i8** %3
  %17 = load i32, i32* %6
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i8, i8* %16, i64 %18
  %20 = load i8, i8* %19
  %21 = icmp ne i8 %20, 0
  br i1 %21, label %24, label %22
22:
  br label %68
24:
  %25 = load i8*, i8** %3
  %26 = load i32, i32* %6
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %25, i64 %27
  %29 = load i8, i8* %28
  %30 = sext i8 %29 to i32
  %31 = and i32 %30, 32
  %32 = trunc i32 %31 to i8
  store i8 %32, i8* %7
  %33 = load i8*, i8** %3
  %34 = load i32, i32* %6
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %33, i64 %35
  %37 = load i8, i8* %36
  %38 = sext i8 %37 to i32
  %39 = and i32 %38, -33
  %40 = trunc i32 %39 to i8
  store i8 %40, i8* %8
  %41 = load i8, i8* %8
  %42 = sext i8 %41 to i32
  %43 = icmp sge i32 %42, 65
  br i1 %43, label %44, label %64
44:
  %45 = load i8, i8* %8
  %46 = sext i8 %45 to i32
  %47 = icmp sle i32 %46, 90
  br i1 %47, label %48, label %64
48:
  %49 = load i8, i8* %8
  %50 = sext i8 %49 to i32
  %51 = sub nsw i32 %50, 65
  %52 = load i32, i32* %5
  %53 = add nsw i32 %51, %52
  %54 = srem i32 %53, 26
  %55 = add nsw i32 %54, 65
  %56 = load i8, i8* %7
  %57 = sext i8 %56 to i32
  %58 = or i32 %55, %57
  %59 = trunc i32 %58 to i8
  %60 = load i8*, i8** %3
  %61 = load i32, i32* %6
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i8, i8* %60, i64 %62
  store i8 %59, i8* %63
  br label %64
64:
  br label %65
65:
  %66 = load i32, i32* %6
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %6
  br label %15
68:
  ret void
}
