@.str = constant [5 x i8] c"%c%d\00"
define dso_local void @RLEEncode(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %10 = load i8*, i8** %3
  %11 = call i64 @strlen(i8* %10)
  %12 = trunc i64 %11 to i32
  store i32 %12, i32* %5
  store i32 0, i32* %6
  %14 = load i32, i32* %5
  %15 = load i32, i32* %5
  %16 = mul nsw i32 %14, %15
  %17 = add nsw i32 %16, 1
  %18 = icmp sgt i32 %17, 0
  br i1 %18, label %19, label %76
19:
  store i32 0, i32* %7
  br label %21
21:
  %22 = load i32, i32* %7
  %23 = load i32, i32* %5
  %24 = icmp slt i32 %22, %23
  br i1 %24, label %27, label %25
25:
  br label %75
27:
  store i32 1, i32* %8
  br label %29
29:
  %30 = load i32, i32* %7
  %31 = load i32, i32* %8
  %32 = add nsw i32 %30, %31
  %33 = load i32, i32* %5
  %34 = icmp slt i32 %32, %33
  br i1 %34, label %35, label %51
35:
  %36 = load i8*, i8** %3
  %37 = load i32, i32* %7
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i8, i8* %36, i64 %38
  %40 = load i8, i8* %39
  %41 = sext i8 %40 to i32
  %42 = load i8*, i8** %3
  %43 = load i32, i32* %7
  %44 = load i32, i32* %8
  %45 = add nsw i32 %43, %44
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %42, i64 %46
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = icmp eq i32 %41, %49
  br label %51
51:
  %52 = phi i1 [ false, %29 ], [ %50, %35 ]
  br i1 %52, label %53, label %56
53:
  %54 = load i32, i32* %8
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %8
  br label %29
56:
  %57 = load i8*, i8** %4
  %58 = load i32, i32* %6
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i8, i8* %57, i64 %59
  %61 = load i8*, i8** %3
  %62 = load i32, i32* %7
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i8, i8* %61, i64 %63
  %65 = load i8, i8* %64
  %66 = sext i8 %65 to i32
  %67 = load i32, i32* %8
  %68 = call i32 (i8*, i8*, ...) @sprintf(i8* %60, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %66, i32 %67)
  %69 = load i32, i32* %6
  %70 = add nsw i32 %69, %68
  store i32 %70, i32* %6
  %71 = load i32, i32* %8
  %72 = load i32, i32* %7
  %73 = add nsw i32 %72, %71
  store i32 %73, i32* %7
  br label %21
75:
  br label %76
76:
  ret void
}
declare i64 @strlen(i8*)
declare i32 @sprintf(i8*, i8*, ...)
