@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @v(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i8* %0, i8** %2
  %11 = load i8*, i8** %2
  %12 = call i64 @strlen(i8* %11)
  %13 = trunc i64 %12 to i32
  store i32 %13, i32* %3
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %16
16:
  %17 = load i32, i32* %5
  %18 = load i32, i32* %3
  %19 = icmp slt i32 %17, %18
  br i1 %19, label %22, label %20
20:
  store i32 2, i32* %6
  br label %70
22:
  %24 = load i8*, i8** %2
  %25 = load i32, i32* %5
  %26 = sext i32 %25 to i64
  %27 = getelementptr inbounds i8, i8* %24, i64 %26
  %28 = load i8, i8* %27
  %29 = sext i8 %28 to i32
  %30 = or i32 %29, 32
  store i32 %30, i32* %7
  %31 = load i32, i32* %7
  %32 = icmp sge i32 %31, 97
  br i1 %32, label %33, label %37
33:
  %34 = load i32, i32* %7
  %35 = sub nsw i32 %34, 97
  %36 = add nsw i32 %35, 10
  br label %40
37:
  %38 = load i32, i32* %7
  %39 = sub nsw i32 %38, 48
  br label %40
40:
  %41 = phi i32 [ %36, %33 ], [ %39, %37 ]
  store i32 %41, i32* %7
  store i32 1, i32* %8
  store i32 0, i32* %9
  br label %44
44:
  %45 = load i32, i32* %9
  %46 = load i32, i32* %3
  %47 = sub nsw i32 %46, 1
  %48 = load i32, i32* %5
  %49 = sub nsw i32 %47, %48
  %50 = icmp slt i32 %45, %49
  br i1 %50, label %53, label %51
51:
  store i32 5, i32* %6
  br label %59
53:
  %54 = load i32, i32* %8
  %55 = mul nsw i32 %54, 16
  store i32 %55, i32* %8
  br label %56
56:
  %57 = load i32, i32* %9
  %58 = add nsw i32 %57, 1
  store i32 %58, i32* %9
  br label %44
59:
  %60 = load i32, i32* %7
  %61 = load i32, i32* %8
  %62 = mul nsw i32 %60, %61
  %63 = load i32, i32* %4
  %64 = add nsw i32 %63, %62
  store i32 %64, i32* %4
  br label %67
67:
  %68 = load i32, i32* %5
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %5
  br label %16
70:
  %71 = load i32, i32* %4
  store i32 1, i32* %6
  ret i32 %71
}
declare i64 @strlen(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %15
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @v(i8* %12)
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %13)
  store i32 0, i32* %3
  br label %15
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
declare i32 @printf(i8*, ...)
