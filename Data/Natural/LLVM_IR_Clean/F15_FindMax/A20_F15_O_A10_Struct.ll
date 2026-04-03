%struct.Comp = type { i32, i32, i32 }
define dso_local i32 @FindMax(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca %struct.Comp
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %8 = getelementptr inbounds %struct.Comp, %struct.Comp* %5, i32 0, i32 0
  %9 = load i32*, i32** %3
  %10 = getelementptr inbounds i32, i32* %9, i64 0
  %11 = load i32, i32* %10
  store i32 %11, i32* %8
  %12 = getelementptr inbounds %struct.Comp, %struct.Comp* %5, i32 0, i32 1
  store i32 0, i32* %12
  %13 = getelementptr inbounds %struct.Comp, %struct.Comp* %5, i32 0, i32 2
  %14 = load i32*, i32** %3
  %15 = getelementptr inbounds i32, i32* %14, i64 0
  %16 = load i32, i32* %15
  store i32 %16, i32* %13
  store i32 1, i32* %6
  br label %18
18:
  %19 = load i32, i32* %6
  %20 = load i32, i32* %4
  %21 = icmp slt i32 %19, %20
  br i1 %21, label %24, label %22
22:
  br label %48
24:
  %25 = load i32*, i32** %3
  %26 = load i32, i32* %6
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i32, i32* %25, i64 %27
  %29 = load i32, i32* %28
  %30 = getelementptr inbounds %struct.Comp, %struct.Comp* %5, i32 0, i32 1
  store i32 %29, i32* %30
  %31 = getelementptr inbounds %struct.Comp, %struct.Comp* %5, i32 0, i32 1
  %32 = load i32, i32* %31
  %33 = getelementptr inbounds %struct.Comp, %struct.Comp* %5, i32 0, i32 2
  %34 = load i32, i32* %33
  %35 = icmp sgt i32 %32, %34
  br i1 %35, label %36, label %39
36:
  %37 = getelementptr inbounds %struct.Comp, %struct.Comp* %5, i32 0, i32 1
  %38 = load i32, i32* %37
  br label %42
39:
  %40 = getelementptr inbounds %struct.Comp, %struct.Comp* %5, i32 0, i32 2
  %41 = load i32, i32* %40
  br label %42
42:
  %43 = phi i32 [ %38, %36 ], [ %41, %39 ]
  %44 = getelementptr inbounds %struct.Comp, %struct.Comp* %5, i32 0, i32 2
  store i32 %43, i32* %44
  br label %45
45:
  %46 = load i32, i32* %6
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %6
  br label %18
48:
  %49 = getelementptr inbounds %struct.Comp, %struct.Comp* %5, i32 0, i32 2
  %50 = load i32, i32* %49
  ret i32 %50
}
