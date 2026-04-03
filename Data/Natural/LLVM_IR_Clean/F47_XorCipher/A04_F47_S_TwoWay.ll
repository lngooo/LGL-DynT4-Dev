define dso_local void @XorCipher(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %11
11:
  %12 = load i8*, i8** %3
  %13 = load i32, i32* %5
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %12, i64 %14
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %18, label %21
18:
  %19 = load i32, i32* %5
  %20 = add nsw i32 %19, 1
  store i32 %20, i32* %5
  br label %11
21:
  br label %22
22:
  %23 = load i8*, i8** %4
  %24 = load i32, i32* %6
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = icmp ne i8 %27, 0
  br i1 %28, label %29, label %32
29:
  %30 = load i32, i32* %6
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %6
  br label %22
32:
  store i32 0, i32* %7
  %35 = load i32, i32* %5
  %36 = sub nsw i32 %35, 1
  store i32 %36, i32* %8
  br label %37
37:
  %38 = load i32, i32* %7
  %39 = load i32, i32* %8
  %40 = icmp sle i32 %38, %39
  br i1 %40, label %41, label %83
41:
  %42 = load i8*, i8** %4
  %43 = load i32, i32* %7
  %44 = load i32, i32* %6
  %45 = srem i32 %43, %44
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %42, i64 %46
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = load i8*, i8** %3
  %51 = load i32, i32* %7
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  %54 = load i8, i8* %53
  %55 = sext i8 %54 to i32
  %56 = xor i32 %55, %49
  %57 = trunc i32 %56 to i8
  store i8 %57, i8* %53
  %58 = load i32, i32* %7
  %59 = load i32, i32* %8
  %60 = icmp ne i32 %58, %59
  br i1 %60, label %61, label %78
61:
  %62 = load i8*, i8** %4
  %63 = load i32, i32* %8
  %64 = load i32, i32* %6
  %65 = srem i32 %63, %64
  %66 = sext i32 %65 to i64
  %67 = getelementptr inbounds i8, i8* %62, i64 %66
  %68 = load i8, i8* %67
  %69 = sext i8 %68 to i32
  %70 = load i8*, i8** %3
  %71 = load i32, i32* %8
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i8, i8* %70, i64 %72
  %74 = load i8, i8* %73
  %75 = sext i8 %74 to i32
  %76 = xor i32 %75, %69
  %77 = trunc i32 %76 to i8
  store i8 %77, i8* %73
  br label %78
78:
  %79 = load i32, i32* %7
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %7
  %81 = load i32, i32* %8
  %82 = add nsw i32 %81, -1
  store i32 %82, i32* %8
  br label %37
83:
  ret void
}
