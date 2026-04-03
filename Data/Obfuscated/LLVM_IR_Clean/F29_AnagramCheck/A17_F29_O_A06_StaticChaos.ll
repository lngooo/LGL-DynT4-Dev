@rLAR = internal global [256 x i32] zeroinitializer
define dso_local i32 @XZE(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %10 = load i8*, i8** %4
  %11 = call i64 @strlen(i8* %10)
  %12 = load i8*, i8** %5
  %13 = call i64 @strlen(i8* %12)
  %14 = icmp ne i64 %11, %13
  br i1 %14, label %15, label %16
15:
  store i32 0, i32* %3
  br label %85
16:
  store i32 0, i32* %6
  br label %18
18:
  %19 = load i32, i32* %6
  %20 = icmp slt i32 %19, 256
  br i1 %20, label %23, label %21
21:
  br label %30
23:
  %24 = load i32, i32* %6
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds [256 x i32], [256 x i32]* @rLAR, i64 0, i64 %25
  store i32 0, i32* %26
  br label %27
27:
  %28 = load i32, i32* %6
  %29 = add nsw i32 %28, 1
  store i32 %29, i32* %6
  br label %18
30:
  store i32 0, i32* %7
  br label %32
32:
  %33 = load i8*, i8** %4
  %34 = load i32, i32* %7
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %33, i64 %35
  %37 = load i8, i8* %36
  %38 = icmp ne i8 %37, 0
  br i1 %38, label %39, label %62
39:
  %40 = load i8*, i8** %4
  %41 = load i32, i32* %7
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds [256 x i32], [256 x i32]* @rLAR, i64 0, i64 %46
  %48 = load i32, i32* %47
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %47
  %50 = load i8*, i8** %5
  %51 = load i32, i32* %7
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  %54 = load i8, i8* %53
  %55 = sext i8 %54 to i32
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds [256 x i32], [256 x i32]* @rLAR, i64 0, i64 %56
  %58 = load i32, i32* %57
  %59 = add nsw i32 %58, -1
  store i32 %59, i32* %57
  %60 = load i32, i32* %7
  %61 = add nsw i32 %60, 1
  store i32 %61, i32* %7
  br label %32
62:
  store i32 1, i32* %8
  store i32 0, i32* %9
  br label %65
65:
  %66 = load i32, i32* %9
  %67 = icmp slt i32 %66, 256
  br i1 %67, label %70, label %68
68:
  br label %81
70:
  %71 = load i32, i32* %9
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds [256 x i32], [256 x i32]* @rLAR, i64 0, i64 %72
  %74 = load i32, i32* %73
  %75 = icmp ne i32 %74, 0
  br i1 %75, label %76, label %77
76:
  store i32 0, i32* %8
  br label %77
77:
  br label %78
78:
  %79 = load i32, i32* %9
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %9
  br label %65
81:
  %82 = load i32, i32* %8
  store i32 %82, i32* %3
  br label %85
85:
  %86 = load i32, i32* %3
  ret i32 %86
}
declare i64 @strlen(i8*)
