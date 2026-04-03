define dso_local void @XorCipher(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i8*, i8** %4
  %11 = load i32, i32* %5
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %5
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %5
  br label %9
19:
  store i32 0, i32* %6
  br label %21
21:
  %22 = load i8*, i8** %3
  %23 = load i32, i32* %6
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = icmp ne i8 %26, 0
  br i1 %27, label %30, label %28
28:
  br label %69
30:
  %32 = load i32, i32* %6
  %33 = load i32, i32* %5
  %34 = srem i32 %32, %33
  store i32 %34, i32* %7
  %35 = load i32, i32* %7
  %36 = icmp sge i32 %35, 0
  br i1 %36, label %37, label %51
37:
  %38 = load i8*, i8** %3
  %39 = load i32, i32* %6
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = load i8*, i8** %4
  %45 = load i32, i32* %7
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = xor i32 %43, %49
  br label %58
51:
  %52 = load i8*, i8** %3
  %53 = load i32, i32* %6
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i8, i8* %52, i64 %54
  %56 = load i8, i8* %55
  %57 = sext i8 %56 to i32
  br label %58
58:
  %59 = phi i32 [ %50, %37 ], [ %57, %51 ]
  %60 = trunc i32 %59 to i8
  %61 = load i8*, i8** %3
  %62 = load i32, i32* %6
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i8, i8* %61, i64 %63
  store i8 %60, i8* %64
  br label %66
66:
  %67 = load i32, i32* %6
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %6
  br label %21
69:
  ret void
}
