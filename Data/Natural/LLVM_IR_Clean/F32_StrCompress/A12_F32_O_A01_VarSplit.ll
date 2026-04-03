@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @StrCompress(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %2
  %10 = load i8*, i8** %2
  %11 = call i64 @strlen(i8* %10)
  %12 = trunc i64 %11 to i32
  store i32 %12, i32* %3
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %15
15:
  %16 = load i32, i32* %4
  %17 = load i32, i32* %5
  %18 = add nsw i32 %16, %17
  %19 = load i32, i32* %3
  %20 = icmp slt i32 %18, %19
  br i1 %20, label %21, label %76
21:
  store i32 1, i32* %6
  %24 = load i32, i32* %4
  %25 = load i32, i32* %5
  %26 = add nsw i32 %24, %25
  store i32 %26, i32* %7
  br label %27
27:
  %28 = load i32, i32* %7
  %29 = add nsw i32 %28, 1
  %30 = load i32, i32* %3
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %32, label %47
32:
  %33 = load i8*, i8** %2
  %34 = load i32, i32* %7
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %33, i64 %35
  %37 = load i8, i8* %36
  %38 = sext i8 %37 to i32
  %39 = load i8*, i8** %2
  %40 = load i32, i32* %7
  %41 = add nsw i32 %40, 1
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %39, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = icmp eq i32 %38, %45
  br label %47
47:
  %48 = phi i1 [ false, %27 ], [ %46, %32 ]
  br i1 %48, label %49, label %54
49:
  %50 = load i32, i32* %6
  %51 = add nsw i32 %50, 1
  store i32 %51, i32* %6
  %52 = load i32, i32* %7
  %53 = add nsw i32 %52, 1
  store i32 %53, i32* %7
  br label %27
54:
  %55 = load i8*, i8** %2
  %56 = load i32, i32* %7
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i8, i8* %55, i64 %57
  %59 = load i8, i8* %58
  %60 = sext i8 %59 to i32
  %61 = load i32, i32* %6
  %62 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %60, i32 %61)
  %64 = load i32, i32* %7
  %65 = add nsw i32 %64, 1
  %66 = load i32, i32* %4
  %67 = load i32, i32* %5
  %68 = add nsw i32 %66, %67
  %69 = sub nsw i32 %65, %68
  store i32 %69, i32* %8
  %70 = load i32, i32* %8
  %71 = load i32, i32* %4
  %72 = add nsw i32 %71, %70
  store i32 %72, i32* %4
  br label %15
76:
  %77 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  ret void
}
declare i64 @strlen(i8*)
declare i32 @printf(i8*, ...)
