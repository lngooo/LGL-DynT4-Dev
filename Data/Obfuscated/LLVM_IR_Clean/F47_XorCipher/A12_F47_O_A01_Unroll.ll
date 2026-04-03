define dso_local void @ubi(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
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
  br label %20
20:
  %21 = load i8*, i8** %3
  %22 = load i32, i32* %6
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i8, i8* %21, i64 %23
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = icmp ne i32 %26, 0
  br i1 %27, label %28, label %37
28:
  %29 = load i8*, i8** %3
  %30 = load i32, i32* %6
  %31 = add nsw i32 %30, 1
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %29, i64 %32
  %34 = load i8, i8* %33
  %35 = sext i8 %34 to i32
  %36 = icmp ne i32 %35, 0
  br label %37
37:
  %38 = phi i1 [ false, %20 ], [ %36, %28 ]
  br i1 %38, label %39, label %76
39:
  %40 = load i8*, i8** %4
  %41 = load i32, i32* %6
  %42 = load i32, i32* %5
  %43 = srem i32 %41, %42
  %44 = sext i32 %43 to i64
  %45 = getelementptr inbounds i8, i8* %40, i64 %44
  %46 = load i8, i8* %45
  %47 = sext i8 %46 to i32
  %48 = load i8*, i8** %3
  %49 = load i32, i32* %6
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i8, i8* %48, i64 %50
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = xor i32 %53, %47
  %55 = trunc i32 %54 to i8
  store i8 %55, i8* %51
  %56 = load i8*, i8** %4
  %57 = load i32, i32* %6
  %58 = add nsw i32 %57, 1
  %59 = load i32, i32* %5
  %60 = srem i32 %58, %59
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i8, i8* %56, i64 %61
  %63 = load i8, i8* %62
  %64 = sext i8 %63 to i32
  %65 = load i8*, i8** %3
  %66 = load i32, i32* %6
  %67 = add nsw i32 %66, 1
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i8, i8* %65, i64 %68
  %70 = load i8, i8* %69
  %71 = sext i8 %70 to i32
  %72 = xor i32 %71, %64
  %73 = trunc i32 %72 to i8
  store i8 %73, i8* %69
  %74 = load i32, i32* %6
  %75 = add nsw i32 %74, 2
  store i32 %75, i32* %6
  br label %20
76:
  %77 = load i8*, i8** %3
  %78 = load i32, i32* %6
  %79 = sext i32 %78 to i64
  %80 = getelementptr inbounds i8, i8* %77, i64 %79
  %81 = load i8, i8* %80
  %82 = icmp ne i8 %81, 0
  br i1 %82, label %83, label %100
83:
  %84 = load i8*, i8** %4
  %85 = load i32, i32* %6
  %86 = load i32, i32* %5
  %87 = srem i32 %85, %86
  %88 = sext i32 %87 to i64
  %89 = getelementptr inbounds i8, i8* %84, i64 %88
  %90 = load i8, i8* %89
  %91 = sext i8 %90 to i32
  %92 = load i8*, i8** %3
  %93 = load i32, i32* %6
  %94 = sext i32 %93 to i64
  %95 = getelementptr inbounds i8, i8* %92, i64 %94
  %96 = load i8, i8* %95
  %97 = sext i8 %96 to i32
  %98 = xor i32 %97, %91
  %99 = trunc i32 %98 to i8
  store i8 %99, i8* %95
  br label %100
100:
  ret void
}
